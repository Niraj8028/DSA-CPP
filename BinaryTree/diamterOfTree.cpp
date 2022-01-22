#include <iostream>
using namespace std;

struct node{
    int data;
    node* left;
    node* right;
    node(int val){
        data=val;
        left=NULL;
        right=NULL;
    }
};

int height(node*root){
    if(root==NULL){
        return 0;
    }
    int lHeight=height(root->left);
    int rHeight=height(root->right);
    return max(lHeight,rHeight)+1;
}

int diameter(node*root){
    if(root==NULL){
        return 0;
    }
    int lHeight=height(root->left);
    int rHeight=height(root->right);
    int currDia=lHeight+rHeight+1;

    return max(currDia,max(diameter(root->left),diameter(root->right)));
    

}

int main(){
    struct node*root=new node(1);
    root->left=new node(2);
    root->right=new node(3);
    root->left->right=new node(5);
    root->left->left=new node(4);
    root->right->left=new node(6);
    root->right->right=new node(7);
    root->right->right->right=new node(8);
    root->right->right->left=new node(8);
    root->right->right->left->left=new node(8);
    cout<<diameter(root);
    return 0;
    
    
}