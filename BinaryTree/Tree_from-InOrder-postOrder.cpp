#include <iostream>
using namespace std;
struct node
{
    int data;
    node *left;
    node *right;
    node(int val)
    {
        data = val;
        left = NULL;
        right = NULL;
    }
};

int search(int inorder[], int start, int end, int curr)
{
    for (int i = start; i <= end; i++)
    {
        if (inorder[i] == curr)
        {
            return i;
        }
    }
    return -1;
}
node *BuildTree(int preorder[], int inorder[], int start, int end)
{
    if (start > end)
    {
        return NULL;
    }

    static int idx = 0;
    int curr = preorder[idx];
    idx++;
    node *Node = new node(curr);

    if (start == end)
    {
        return Node;
    }

    int pos = search(inorder, start, end, curr);
    Node->left = BuildTree(preorder, inorder, start, pos - 1);
    Node->right = BuildTree(preorder, inorder, pos + 1, end);
}
void inorderprint(node *root)
{
    if (root == NULL)
    {
        return;
    }
    inorderprint(root->left);
    cout << root->data;
    inorderprint(root->right);
}

int main()
{
    int preorder[] = {1, 2, 4, 3, 5};
    int inorder[] = {4, 2, 1, 5, 3};
    node *newroot = BuildTree(preorder, inorder, 0, 4);
    inorderprint(newroot);

    return 0;
}