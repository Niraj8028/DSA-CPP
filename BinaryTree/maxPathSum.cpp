#include <iostream>
#include <climits>
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

int maxsum(node* root){
    if(root==NULL){
        return 0;
    }
    int ans=INT_MIN;
    int a=root->data;
    int b=maxsum(root->left)+root->data;
    int c=maxsum(root->right)+root->data;
    int d=maxsum(root->right)+maxsum(root->left)+root->data;
    int temp=max(max(a,d),max(b,c));
    ans=max(temp,ans);
    return ans;

}
int main(){
    node* root=new node(1);
    root->left=new node(2);
    root->right=new node(3);
    root->left->right=new node(5);
    root->left->left=new node(6);
    root->left->right->right=new node(7);
    cout<<maxsum(root);
    
    return 0;
}
// int maxpathsum(node* root,int &ans){
//     if(root==NULL){
//         return 0;
//     }
//     int Left=(root->left,ans);
//     int Right=(root->Right,ans);

//     int maxans=max(max(root->data,root->data+left+right),
//                     max(root->data+left,root->data+right));
//     ans=max(maxans,ans);

// }