#include <iostream>
#include <vector>
#include <climits>

using namespace std;

void dfs(int node,int parent,vector<int>&vis,vector<int>&time,vector<int>&low,vector<int>adj[],int count){
    vis[node]=1;
    time[node]=low[node]=count;
    count++;

    for(auto it :adj[node]){
        if(it==parent){
            continue;
        }
        if(!vis[it]){
            dfs(it,node,vis,time,low,adj,count);
            low[node]=min(low[node],low[it]);
            if(low[it]>time[node]){
                cout<<node<<" ";
            }
        }
        else{
            low[node]=min(low[node],time[it]);
        }
    }
}
void findbridges(int n,vector<int>adj[]){
    vector<int>vis(n,0);
    vector<int>time(n,-1);
    vector<int>low(n,-1);
    int count=1;
    for(int i=0; i<n; i++){
        if(!vis[i]){
            dfs(i,-1,vis,time,low,adj,count);
        }
    }
}
int main(){
    int v,e;
    cin>>v>>e;
    vector<int>adj[e];
    for(int i=0; i<v; i++){
        int u,v;
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);

    }
    
    return 0;
}