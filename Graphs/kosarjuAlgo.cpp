#include <iostream>
#include <vector>
#include <stack>
using namespace std;

void dfs(int node,vector<int>adj[],vector<int>&vis,stack<int>&st){
    vis[node]=1;

    for(auto it: adj[node]){
        if(!vis[it]){
            dfs(it,adj,vis,st);
        }
    }
    st.push(node);
}
void revDFS(int node,vector<int>trans[],vector<int>&vis){
    vis[node]=1;
    cout<<node<<" ";
    
    for(auto it:adj[node]){
        if(!vis[it]){
            revDFS(it,trans,vis);
        }
    }
}

void kosarjuAlgo(int n, vector<int>adj[]){
    vector<int>vis(0,1);
    stack<int>st;

    for(int i=0; i<n; i++){
        if(!vis[i]){
            dfs(i,adj,vis,st);
        }
    }
    vector<int>trans[];

    for(int i=0; i<n; i++){
        vis[i]=0;
        for(auto it :adj[i]){
            trans[it].push_back(i);
        }
    }
    while(!st.empty()){
        int node=st.top();
        st.pop();
        if(!vis[node]){
            revDFS(node,trans,vis);
        }
    }

}
int main(){
    
    return 0;
}