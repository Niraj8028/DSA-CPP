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

int search(int InOrder[], int start, int end, int curr)
{
    for (int i = start; i <= end; i++)
    {
        if (InOrder[i] == curr)
        {
            return i;
        }
    }
    return -1;
}
node *BuildTree(int postorder[], int InOrder[], int start, int end)
{

    if (start > end)
    {
        return NULL;
    }
    static int idx = 4;
    int curr = postorder[idx];
    idx--;
    node *Node = new node(curr);

    if (start == end)
    {

        return Node;
    }
    int pos = search(InOrder, start, end, curr);
    Node->right = BuildTree(postorder, InOrder, pos + 1, end);
    Node->left = BuildTree(postorder, InOrder, start, pos - 1);
    return Node;
}
void postorderprint(node *root)
{
    if (root == NULL)
    {
        return;
    }
    postorderprint(root->left);
    postorderprint(root->right);
    cout << root->data;
}
int main()
{
    int postorder[] = {4, 2, 5, 3, 1}; 
    int inorder[] = {4, 2, 1, 5, 3};
    node *newroot = BuildTree(postorder, inorder, 0, 4);
    postorderprint(newroot);

    return 0;
}