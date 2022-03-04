#include <iostream>
#include <vector>
using namespace std;
#define vi vector<int>
#define pii vector<pair<int,int>>
int main(){
    void dfs(int node,vector<int>&vis,int N,vector<int>adj[]){
        vis[node]+=1;
        for(auto it:adj[node]){
            if(vis[it]<=node){
                dfs(it,vis,N,adj);
                return;
            }
        }
        return;
    }
    
    int captainAmerica(int N, int M, vector<vector<int>> &V){
        // Code Here
        vector<int>vis(N,0);
        vector<int>adj[N];
        for(int i=0; i<M; i++){
            adj[V[i][0]].push_back(V[i][1]);
        }
        for(int i=1; i<=N; i++){
            dfs(i,vis,N,adj);
        }
        int ans=0;
        for(int i=0; i<N; i++){
            if(vis[i]==N){
                ans++;
            }
        }
        return ans;
    } 
    return 0;
}