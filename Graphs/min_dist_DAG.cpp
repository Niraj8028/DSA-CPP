#include <iostream>
#include <stack>
#include <vector>
#include <climits>
using namespace std;

void toposort(vector<pair<int,int>>adj[],int n,vector<int>&vis,int node,stack<int>&st){
    
    vis[node]=1;

    for(auto it: adj[node]){
        if(!vis[it]){
            toposort(adj,n,vis,it);
        }
    }
    st.push(node);
}
void shortestDis(int n, vector<pair<int,int>>adj[],int src){
    vector<int>vis(n,0);
    stack<int>st;
    for(int i=0; i<n; i++){
        if(!vis[i]){
            toposort(adj,n,vis,i,st);
        }
    }
    int dist[n];
    for(int i=0; i<n; i++){
        dist[i]=INT_MAX;
    }
    dist[src]=0;

    while(!st.empty()){
        int temp=st.top();
        st.pop();
        for(auto it : adj[temp]){
            if(dist[it]>dist[temp]+it.second){
                dist[it]=dist[temp]+it.second;
            }
        }
    }


}

int main(){
    
    return 0;
}