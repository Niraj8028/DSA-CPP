#include <iostream>
#include <climits>
using namespace std;

struct node{
    int data;
    node* left, *right;
    node(int val){
        data=val;
        left=NULL;
        right=NULL;
    }
};

node* constructBST(int preorder[],int * idx, int key, int min, int max, int n){
    node* root=NULL;

    if(*idx>=n){
        return NULL;
    }

    if(key>min && key<max){
        root=new node(key);
        *idx=*idx+1;
    

        if(*idx<n){
            root->left=constructBST(preorder,idx,preorder[*idx],min ,key,n);
        }
        if(*idx<n){
            root->right=constructBST(preorder,idx, preorder[*idx],key,max,n);
        }
    }
    return root;
}

void preorderprint(node* root){

    if(root==NULL){
        return;
    }
    cout<<root->data<<" ";
    preorderprint(root->left);
    preorderprint(root->right);
}
int main(){
    int preorder[]={10,2,1,13,11};
    int n=5;
    int min=INT_MIN;
    int max=INT_MAX;
    int idx=0;
    int key=preorder[idx];
    node* newroot=constructBST(preorder,&idx,key,min,max,n);
    preorderprint(newroot);

    
    return 0;
}