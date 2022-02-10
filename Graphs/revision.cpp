#include <iostream>
#include <stack>
#include <queue>
using namespace std;

void findsort(int node,int n, vector<pair<int,int>>adj[],stack<int>&st,vector<int>&vis){
    vis[node]=1;
    for(auto it :adj[node]){
        if(!vis[it]){
            findsort(it,n,adj,st,vis);
        }
    }
    st.push(node);
}

void toposort(int n,vector<pair<int,int>>adj[],int src){
    stack<int>st;
    vector<int>vis(n,0);
    
    for(int i=0; i<n; i++){
        if(!vis[i]){
            findsort(i,n,adj,st,vis);
        }
    }
    while(!st.empty()){
        
    }
}
int main(){
    
    return 0;
}