#include <iostream>
#include <bits/stdc++.h>
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
int height(node *root){
    if(root==NULL){
        return 0;
    }
    int lHeight=height(root->left);
    int rHeight=height(root->right);
    return max(lHeight,rHeight)+1;

}
int main(){
    struct node*root=new node(1);
    root->left=new node(2);
    root->right=new node(3);
    root->left->right=new node(5);
    root->left->left=new node(4);
    cout<<height(root);
    return 0;
}