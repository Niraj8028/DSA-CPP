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
node* insertBST(node* root, int val){

    if(root==NULL){
        return new node(val);
    }

    if(val<root->data){
        root->left=insertBST(root->left,val);
    }
    else{
        root->right=insertBST(root->right,val);
    }

    return root;
}
bool isBST(node* root, node*min=NULL, node* max=NULL){

    if(root==NULL){
        return true;
    }

    if(min!=NULL && root->data<=min->data){
        return false;
    }

    if(max!=NULL && root->data>=max->data){
        return false;
    }
    bool left=isBST(root->left,min,root);
    bool right=isBST(root->right,root,max);

    return left and right;


}
int main(){
    // node* root=NULL;
    // root=insertBST(root,5);
    // insertBST(root,7);
    // insertBST(root,3);
    // insertBST(root,1);
    // insertBST(root,4);
    // insertBST(root,2);
    node* root=new node(5);
    root->left=new node(7);
    root->right=new node(4);
    if(isBST(root,NULL,NULL)){
        cout<<"Tree is BST";
    }
    else{
        cout<<"Tree is not BST";
    }
    
    return 0;
}