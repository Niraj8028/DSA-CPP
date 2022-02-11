#include <iostream>
#include <vector>
#include <climits>
using namespace std;

void dfs(int node,int parent,vector<int>adj[],vector<int>&time,vector<int>&low,vector<int>&Ap,vector<int>&vis,int count){
    vis[node]=1;
    time[node]=low[node]=count;
    count++;
    int child=0;

    for(auto it :adj[node]){
        if(it==parent){
            continue;
        }
        if(!vis[it]){
            dfs(it,node,adj,time,low,Ap,vis,count);
            low[node]=min(low[node],low[it]);
            if(low[it]>=time[node] && (parent!=-1)){
                Ap.push_back(node);
            }
            child++;
        }
        else{
            low[node]=min(low[node],time[it]);
        }
    }
    if(child>1 && parent==-1){
        Ap.push_back(node);
    }
    
}

vector<int>articulationPoint(int n, vector<int>adj[]){
    vector<int>time(n,-1);
    vector<int>low(n,-1);
    vector<int>Ap;
    vector<int>vis(n,0);
    int count=0;

    for(int i=0; i<n; i++){
        if(!vis[i]){
            dfs(i,-1,adj,time,low,Ap,vis,count);
        }
    }


}

int main(){
    
    return 0;
}