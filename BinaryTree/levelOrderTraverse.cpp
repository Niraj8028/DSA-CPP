#include <queue>
#include <iostream>
using namespace std;
// class queue{
//     int arr[];
//     int front;
//     int back;
//     queue(){
//         arr=new int [];
//         front=-1;
//         back=-1;
//     }
// };

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
void levelOrderTraversal(node* root){
    if(root==NULL){
        return;
    }
    queue<node*>q;
    q.push(root);
    q.push(NULL);

    while(!q.empty()){
        node* Node=q.front();
            q.pop();

        if(Node!=NULL){
            cout<<Node->data;
            if(Node->left){
                q.push(Node->left);
            }
            if(Node->right){
                q.push(Node->right);
            }
        }
        else if(!q.empty()){
            q.push(NULL);
        }
    }
}
int main(){
    struct node*root=new node(1);
    root->left=new node(2);
    root->right=new node(3);
    root->left->right=new node(5);
    root->left->left=new node(4);
    levelOrderTraversal(root);
    
    return 0;
}