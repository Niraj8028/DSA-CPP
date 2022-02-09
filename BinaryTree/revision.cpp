#include <iostream>
#include <queue>
#include <climits>
using namespace std;

class node{
    public:
    int data;
    node*left;
    node* right;
    
    node(int val){
        data=val;
        left=NULL;
        right=NULL;
    }
};
int height(node* root){
    if(root==NULL){
        return 0;
    }
    int lheight=height(root->left)+1;
    int rheight=height(root->right)+1;
    return max(lheight,rheight);

}
int diameter(node* root){
    if(root==NULL){
        return 0;
    }
    int ht=height(root);
    int rdia=diameter(root->right);
    int ldia=diameter(root->left);
    int currdia=rdia+ldia+1;

    int maxdia=max(currdia,max(diameter(root->left),diameter(root->right)));
    return maxdia;


}
void lvlOrdertraversal(node*root){
    if(root==NULL){
        return;
    }
    queue<node*>q;
    q.push(root);
    
    

    while(!q.empty()){
        node* Node=q.front();
        q.pop();
        if(Node!=NULL){
            cout<<Node->data;
            if(Node->left){
                q.push(Node->left);
            }
            if(Node->right){
                q.push(Node->right);
            }

        }
        
    }
}

node* flattenTree(node* root){
    if(root==NULL || (root->left==NULL && root->right==NULL)){
        return NULL;
    }
    if(root->left!=NULL){
        flattenTree(root->left);
        node* temp=root->right;
        root->right=root->left;
        root->left=NULL;
        node* t=root->right;
        while(root->right!=NULL){
            t=t->right;
        }
        t->right=temp;
        return root;
    }
    flattenTree(root->right);

}
void inOrderTraversal(node* root){
    if(root==NULL){
        return;
    }
    inOrderTraversal(root->left);
    cout<<root->data;
    inOrderTraversal(root->right);
}

node* sumReplacement(node* root){
    if(root==NULL){
        return NULL;
    }

}
int noOfNodes(node* root){
    if(root==NULL){
        return 0;
    }
    int left=noOfNodes(root->left);
    int right=noOfNodes(root->right);

    return left+right+1;

}
bool isBalanced(node* root){
    if(root==NULL){
        return true;
    }
    int left=height(root->left);
    int right=height(root->right);

    if(abs(left-right)>1){
        return false;
    }
    return true;

}
int main(){
    node* root=new node(1);
    root->left=new node(2);
    root->right=new node(3);
    root->left->right=new node(5);
    root->left->left=new node(4);
    root->right->right=new node(6);
    
    // cout<<noOfNodes(root);
    cout<<isBalanced(root);
    // node* newroot=flattenTree(root);
    // inOrderTraversal(newroot);
    
    return 0;
}