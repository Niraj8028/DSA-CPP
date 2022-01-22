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

void swap(int *a, int *b){
    int temp=*a;
    *a=*b;
    *b=temp;
}
void getpointers(node* root, node** first, node**mid, node**last, node**prev){
    if(root==NULL){
        return;
    }
    getpointers(root->left,first,mid, last,prev);

    if(*prev && root->data < (*prev)->data){
        if(!*first){
            *first=*prev;
            *mid=root;
        }
        else{
            *last=root;
        }

    }
    *prev=root;

    getpointers(root->right,first,mid,last,prev);
}
void recoverBST(node* root){
    if (root==NULL){
        return;
    }
    node* first, *mid ,*last,*prev;
    first=NULL;
    mid=NULL;
    last=NULL;
    prev=NULL;
    
    getpointers(root,&first,&mid, &last,&prev);

    if(first && last){
        swap(&(first->data),&(last->data));
    }
    else if(first && mid){
        swap(&(first->data), &(mid->data));
    }
}

    

void inorder(node* root){
    if(root==NULL){
        return;
    }
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
    
}


int main(){
    node* root=new node(7);
    root->left=new node(5);
    root->right=new node(10);
    root->left->right=new node(9);
    root->left->left=new node(4);
    root->right->left=new node(6);
    inorder(root);
    cout<<" ";
    recoverBST(root);
    inorder(root);
    return 0;
}