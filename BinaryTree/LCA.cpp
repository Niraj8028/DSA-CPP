#include <iostream>
#include <vector>
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

bool getroute(node* root,int n,vector<int>&path){
    
    path.push_back(root->data);
    if(root->data==n){
        
        return true;
    }
    if(root==NULL){
        return false;
    }
    
    if(getroute(root->left,n,path) || getroute(root->right,n,path)){
        return true;
    } 
    path.pop_back();
    return false;
}

int LCA(node* root, int n1, int n2){
    if(root==NULL){
        return -1;
    }
    vector<int>path1;
    vector<int>path2;
    if(!getroute(root,n1,path1) || !getroute(root,n2, path2)){
        return -1;
    }
    int i;
    for( i=0; i<path1.size() && path2.size(); i++){
        if(path1[i]!=path2[i]){
            break;
        }


    }
    return path2[i-1];
}
node* LCA2(node* root, int n1, int n2){
    if(root==NULL){
        return NULL;
    }

    if(root->data==n1 || root->data==n2){
        return root;
    }
    
    node* leftLCA=LCA2(root->left, n1, n2);
    node* rightLCA=LCA2(root->right,n1, n2);

    if(leftLCA!=NULL && rightLCA!=NULL){
        return root;
    }
    if(leftLCA!=NULL){
        return LCA2(root->left,n1,n2);
    }
    if(leftLCA==NULL && rightLCA==NULL){
        return NULL;
    }
    return LCA2(root->right,n1,n2);

}
int main(){
    node* root=new node(1);
    root->left=new node(2);
    root->right=new node(3);
    root->left->right=new node(5);
    root->left->left=new node(6);
    root->left->right->right=new node(7);
    node* lca=LCA2(root,6,7);
    cout<<lca->data;
    
    
    
    return 0;
    
    
}