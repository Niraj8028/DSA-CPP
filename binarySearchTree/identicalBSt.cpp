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
bool identical(node* root1, node* root2){
    if(root1==NULL && root2==NULL){
        return true;
    }
    else if(root1==NULL || root2==NULL){
        return false;
    }
    else{
        bool cond1=root1->data==root2->data;
        bool cond2=identical(root1->left,root2->left);
        bool cond3=identical(root1->right,root2->right);

        if(cond1 && cond2 && cond3){
            return true;
        }
        else{
            false;
        }
    }
}
int main(){
    node* root1=new node(4);
    root1->left=new node(3);
    root1->right=new node(5);
    node* root2=new node(4);
    root1->left=new node(3);
    root1->right=new node(6);
    if(identical(root1, root2)){
        cout<<"trees are identical"<<" ";
    }
    else{
        cout<<"trees are not identical"<<" ";
    }
    
    return 0;
}