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

void flatten(node* root){
    if(root==NULL || (root->left==NULL && root->right==NULL)){
        return;
    }
    if(root->left!=NULL){
        flatten(root->left);

        node* temp=root->right;
        root->right=root->left;
        root->left=NULL;
        node*  t=root->right;

        while(root->right!=NULL){
             t=t->right;
        }
        t->right=temp;

    }
    flatten(root->right);
}
void inorderprint(node* root){
    if(root==NULL){
        return;
    }
    inorderprint(root->left);
    cout<<root->data;
    inorderprint(root->right);
}
int main(){
    node* root=new node(1);
    root->left=new node(2);
    root->right=new node(3);
    root->left->right=new node(5);
    root->left->left=new node(6);
    root->left->right->right=new node(7);
    flatten(root);
    inorderprint(root);
    return 0;
}