#include <iostream>
#include <vector>
using namespace std;
#define vi vector<int>
#define pii pair<int,int>
bool checkCycle(int node,int parent,vi adj[],vector<int>&vis ){
    vis[node]=1;
    

    for(auto it :adj[node]){
        if(!vis[it]){
            if(checkCycle(it,node,adj,vis)){
                return true;
            }
            
        }
        else if(it!=parent){
                return true;
            }
    }
    return false;
}

bool isCycle(int v,vi adj[]){
    vector<int>vis(v,0);
    for(int i=0; i<v; i++){
        if(!vis[i]){
            if(checkCycle(i,-1,adj,vis)){
                return true;
            }
        }
    }
    return false;
}
int main(){
    int v,e;
    cin>>v>>e;
    vector<int>adj[v];
    for(int i=0; i<e; i++){
        int m,n;
        cin>>m>>n;
        adj[m].push_back(n);
        adj[n].push_back(m);
        
    }
    
    return 0;
}