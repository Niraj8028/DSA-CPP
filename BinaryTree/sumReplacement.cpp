#include <iostream>
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
void sum(node* root){
    if(root==NULL){
        return;
    }
    sum(root->left);
    sum(root->right);
    if(root->left!=NULL){
        root->data=root->data+root->left->data;
    }
    if(root->right!=NULL){
        root->data=root->data+root->right->data;
    }
    
}
void preorder(node* root){
    if(root==NULL){
        return;
    }
    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
}
int main(){
    node* root=new node(1);
    root->left=new node(2);
    root->right=new node(3);
    root->left->right=new node(5);
    root->left->left=new node(4);
    sum(root);
    preorder(root);
    
    return 0;
}