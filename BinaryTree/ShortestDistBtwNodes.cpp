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

node * LCA(node* root, int n1, int n2){
    if(root==NULL){
        return NULL;
    }
    if(root->data==n1 || root->data==n2){
        return root;
    }
    node* left=LCA(root->left, n1, n2);
    node* right=LCA(root->right, n1, n2);

    if(left!=NULL && right!=NULL){
        return root;
    }
    if(left!=NULL){
        return LCA(root->left,n1, n2);
    }
    if(left==NULL && right==NULL){
        return NULL;
    }
    return LCA(root->right, n1,n2);
}

int FindDist(node*root, int k, int dist){
    if(root==NULL){
        return -1;
    }
    if(root->data==k){
        return dist; 
    }
    int ld=FindDist(root->left,k,dist+1);
    int rd=FindDist(root->right,k,dist+1);

    if(ld !=-1){
        return ld;
    }
    return FindDist(root->right,k,dist+1);
}

int DistBtwNodes(node* root, int n1, int n2){
    node* lca=LCA(root,n1,n2);
    int d1=FindDist(lca,n1,0);
    int d2=FindDist(lca,n2,0);

    return d1+d2;
}
int main(){
    node* root=new node(1);
    root->left=new node(2);
    root->right=new node(3);
    root->left->right=new node(5);
    root->left->left=new node(6);
    root->left->right->right=new node(7);
    node* lca=LCA(root,2,3);
    cout<<lca->data;
    
    return 0;
}