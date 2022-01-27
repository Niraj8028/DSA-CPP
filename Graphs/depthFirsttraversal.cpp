#include <iostream>
#include <queue>
#include <vector>
using namespace std;

void dfs(int node,vector<int>&dfs,vector<int>&vis,vector<int>arr[]){
    dfs.push_back(node);
    vis[node]=1;

    for(auto it : arr(node)){
        if(!vis[node]){
            dfs(it,dfs,vis,arr);
        }
    }

    
}
vector<int> depthFirstSearch(int v,vector<int>arr[]){
    vector<int>dfs;
    vector<int>vis(v+1,0);

    for(int i=0; i<=v; i++){
        
        if(!vis[i]){
            dfs(i,dfs,vis,arr);

        }

    }
    return dfs;
}
int main(){
    
    return 0;
}