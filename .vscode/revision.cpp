#include <iostream>
#include <queue>
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

int sumATLevel(node *root, int k)
{
    if (root == NULL)
    {
        return -1;
    }
    queue<node *> q;

    q.push(root);
    q.push(NULL);
    int sum = 0;
    int level = 0;
    while (!q.empty())
    {

        node *temp = q.front();
        q.pop();
        if (temp!=NULL)
        {
            if (level==k)
            {
                sum = sum + temp->data;
            }
            if (temp->left)
            {
                q.push(temp->left);
            }
            if (root->right)
            {
                q.push(temp->right);
            }
        }
        else if(!q.empty()){
            q.push(NULL);
            level++;
        }
    }
    return sum;
}

int main()
{
    struct node*root=new node(1);
    root->left=new node(2);
    root->right=new node(3);
    root->left->right=new node(5);
    root->left->left=new node(4);
    cout<<sumATLevel(root,2);

    return 0;
}