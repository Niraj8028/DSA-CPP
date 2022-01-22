#include <iostream>
#include <queue>
using namespace std;

struct node{
    int data;
    struct node*left;
    struct node*right;
    node(int val){
        data=val;
        left=NULL;
        right=NULL;
    }
};
void leftView(node* root){
    if(root==NULL){
        return;
    }
    queue<node*>q;
    q.push(root);
    while(!q.empty()){
        int n=q.size();
        for(int i=1; i<=n; i++){
            node* temp=q.front();
            q.pop();
            if(i==1){
                cout<<temp->data;
            }
            if(temp->left!=NULL){
                q.push(temp->left);
            }
            if(temp->right!=NULL){
                q.push(temp->right);
            }
        }
    }
}
int main(){
    node* root=new node(1);
    root->left=new node(2);
    root->right=new node(3);
    root->left->right=new node(5);
    root->left->left=new node(6);
    root->left->right->right=new node(7);
    leftView(root);
    
    return 0;
}