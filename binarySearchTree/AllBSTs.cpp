#include <iostream>
#include <vector>
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

vector<node*>BSTs(int start,int end){
    vector<node*>trees;
    if(start>end){
        trees.push_back(NULL);
        return trees;
    }
    
    for(int i=start; i<=end; i++){
        vector<node*>leftsub=BSTs(start,i-1);
        vector<node*>rightsub=BSTs(i+1,end);

        for(int j=0; j<leftsub.size(); j++){
            
            node* left=leftsub[j];

            for(int k=0; k<rightsub.size(); k++){

                node* right=rightsub[k];
                node* Node= new node(i);
                Node->left=left;
                Node->right=right;
                trees.push_back(Node);
            }

        }

    }
    return trees;

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
    vector<node*>allTrees=BSTs(1,3);
    for(int i=0; i<allTrees.size(); i++){
        preorder(allTrees[i]);
        cout<<endl;
    }
    
    return 0;
}