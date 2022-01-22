#include <iostream>
#include <map>
#include <vector>
using namespace std;

class node{
    int data;
    node* left;
    node* right;
    node(int val){
        data=val;
        left=NULL;
        right=NULL:
    }
};
void getnodes(node*root,int hdist,map<int,vector<int>&m>){
    if(root==NULL){
        return;
    }

    m[hdist].push_back(root->data);

    getnodes(root->left,hdist-1);
    getnodes(root->right,hdist+1);
}
void getVwrticalNodes(node*root)
int main(){
    node* root=new node(10);
    root->left=new node(7);
    root->left->left=new node(3);
    root->right=new node(4);
    root->left->right=new node(11);
    root->right->left=new node(14);
    root->right->right=new node(16);
    int hdist=0;
    map<int,vector<int>>m;
    getnodes(root,hdist,m);

    map<int,vector<int>>:: iterator it;
    for(it=m.begin(); it!=m.end(); it++){
        for(int i=0; i<(it->second).size(); i++){
            cout<<(it->second)[i]<<" ";
        }
    }
    
    return 0;
}  