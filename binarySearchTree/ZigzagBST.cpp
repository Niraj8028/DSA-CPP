#include <iostream>
#include <stack>
#include <algorithm>
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
void zigzag(node* root){
    if(root==NULL){
        return;
    }

    stack<node*>currLvl;
    stack<node*>nextLvl;

    bool leftToright=true;

    currLvl.push(root);

    while(!currLvl.empty()){
        node* temp=currLvl.top();
        currLvl.pop();
        
        if(temp){
            cout<<temp->data<<" ";
        

            if(leftToright){

                if(temp->left){
                    nextLvl.push(temp->left);
                }
                if(temp->right){
                    nextLvl.push(temp->right);
                }
            }
            else{

                if(temp->right){
                    nextLvl.push(temp->right);
                }
                if(temp->left){
                    nextLvl.push(temp->left);
                }
            }
        }
        if(currLvl.empty()){
            leftToright=!leftToright;
            swap(currLvl,nextLvl);
        }     
   }
   return;
}
void preorder(node* root){
    if(root==NULL){
        return;
    }
    cout<<root->data<< " ";
    preorder(root->left);
    preorder(root->right);
}
int main(){
    node* root=new node(12);
    root->left=new node(9);
    root->right=new node(15); 
    root->left->right=new node(10);
    root->left->left=new node(5);
    //root->right->left=new node(11);
    
    preorder(root);
    return 0;
}