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
struct info(){
    int size;
    int max;
    int min;
    int ans;
    bool BST;
};

info maxBST(node* root){
    if(root==NULL){
        return {0,INT_MIN,INT_MAX,0,true};
    }
    if(root->left==NULL && root->right==NULL){
        return {1,root->data,root->data,1,true};
    }
    info leftinfo=maxBST(root->left);
    info rightinfo=maxBST(root->right);
    info curr;

    curr.size=(1+leftinfo.size+rightinfo.size);

    if(leftinfo.BST && rightinfo.BST && leftinfo.max < root->data && rightinfo.min > root->data){
        min=min(leftinfo.min, min(rightinfo.min,root->data));
        max=max(rightinfo.max, max(leftinfo.max,root->data));

        curr.ans=curr.size;
        curr.BST=true;

    }
    curr.ans=max(leftinfo.size, rightinfo.size);
    curr.BST=false;
    return curr;
}
int main(){
    node* root=new node(7);
    root->left=new node(5);
    root->right=new node(8);
    root->left->right=new node(6);
    cout<<"largest BST  in BT"<< maxBST(root).ans<<endl;

    
    return 0;
}