#include <iostream>
using namespace std;

 bool checkCycle(int node,vector<int>adj[],vector<int>&vis,vector<int>&dfsvis){
        vis[node]=1;
        dfsvis[node]=1;
        
        for(auto it : adj[node]){
            if(!vis[it]){
                if(checkCycle(it,adj,vis,dfsvis)){
                    return true;
                }
            }
            else if(dfsvis[it]){
                return true;
            }
        }
        dfsvis[node]=0;
        return false;
    }
    
    bool isCyclic(int v, vector<int> adj[]) {
        // code here
        vector<int>vis(v,0);
        vector<int>dfsvis(v,0);
        
        for(int i=0; i<v; i++){
            if(!vis[i]){
                if(checkCycle(i,adj,vis,dfsvis)){
                    return true;
                }
            }
        }
        return false;
    }


int main(){
    
    return 0;
}