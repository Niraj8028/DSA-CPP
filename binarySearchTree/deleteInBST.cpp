#include <iostream>
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
node* inorderpre(node* root){
    root=root->left;
    while(root->right!=NULL){
        root=root->right;
        
    }
    return root;
}
node* deleteBST(node* root, int key){
    if(root==NULL){
        return NULL;
    }

    if(root->left==NULL && root->right==NULL){
        free(root);
    }
    if(key<root->data){
        deleteBST(root->left,key);

    }
    else if(key>root->data){
        deleteBST(root->right,key);
    }
    else{
        if(root->left==NULL){
            node* left=deleteBST(root->left,key);
        }

        }
    return root;    
    
}
int main(){
    
    return 0;
}