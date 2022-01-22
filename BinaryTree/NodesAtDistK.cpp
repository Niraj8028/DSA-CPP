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
void rootsAtSubtree(node* root,int k){
    if(root==NULL || k<0){
        return;
    }

    if(k==0){
        cout<<root->data;
    }

    rootsAtSubtree(root->left,k-1);
    rootsAtSubtree(root->right,k-1);
}
int NodesAtK(node* root, node* target, int k){

    if(root==NULL){
        return -1;
    }
    if(root==target){
        rootsAtSubtree(root,k);
        return 0;
    }
    

    int ld=NodesAtK(root->left,target,k);
    int rd=NodesAtK(root->right,target,k);

    if(ld!=-1){
        if(ld+1==k){
            cout<<root->data;
            
        }
        else{
            rootsAtSubtree(root->right,k-ld-2);
        }
        return ld+1;

    }
    if(rd!=-1){
        if(rd+1==k){
            cout<<root->data<<" ";
            
        }
        else{
            rootsAtSubtree(root->left,k-rd-2);
        }
        return rd+1;
    }

    return -1;
}
int main(){
    node* root=new node(1);
    root->left=new node(2);
    root->right=new node(3);
    root->left->right=new node(5);
    root->left->left=new node(4);
    root->right->right=new node(6);
    NodesAtK(root,root,1);
    
    return 0;
}