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
int height(node*root){
    if(root==NULL){
        return 0;
    }
    int lH=height(root->left);
    int rH=height(root->right);
    return max(lH,rH)+1;
}
bool isbalance(node* root){
    if(root==NULL){
        return true;
    }
    if(!isbalance(root->left)){
        return false;
    }
    
    if(!isbalance(root->right)){
        return false;
    }
    int lh=height(root->left);
    int rh=height(root->right);

    if(abs(lh-rh<=1)){
        return true;
    }
    else{
        return false;
    }
}
bool isbalanced(node* root, int * height){
    if(root==NULL){
        return true;
    }
    int lh=0, rh=0;
 
    if(!isbalanced(root->left,&lh)){
        return false;
    }
    if(!isbalanced(root->right, &rh)){
        return false;
    }
    *height=max(lh,rh)+1;

    if(abs(lh-rh)<=1){
        return true;
    }
    else {
        return false;
    }
    
}
int main(){
    node* root=new node(1);
    root->left=new node(2);
    root->right=new node(3);
    //root->left->right=new node(5);
    root->left->left=new node(4);
    root->left->right->right=new node(4);
    int height=0;
    cout<<isbalanced(root,&height);
    
    return 0;
}