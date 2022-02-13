#include <iostream>
#include <vector>
#include <climits>
using namespace std;

void dfs(int node,int parent,vector<int>adj[],vector<int>&vis,int count,vector<int>&dist,vector<int>&low){
    vis[node]=1;
    dist[node]=low[node]=count;
    count++;

    for(auto it: adj[node]){
        if(it==parent){
            continue;
        }
        if(!vis[it]){
            dfs(it,node,adj,vis,count,dist,low);
            low[node]=min(low[node],low[it]);
            if(low[it]>dist[node]){
                cout<<node<<"->"<<it;
            }
        }
        else{
            low[node]=min(low[node],dist[node]);
        }
    }

}

void bridgesinGraph(int n, vector<int>adj[]){
    vector<int>vis(n,0);
    vector<int>dist(n,-1);
    vector<int>low(n,-1);
    
    int count=0;
    for(int i=0; i<n; i++){
        if(!vis[i]){
            dfs(i,-1,adj,vis,count,dist,low);
        }
    }
}
int main(){
    
    return 0;
}