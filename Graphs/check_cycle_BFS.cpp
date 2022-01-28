#include <iostream>
#include <vector>
#include <queue>
using namespace std;
#define pii pair<int,int>

bool checkcycle(int k,vector<int>arr[],vector<int>&is){
    queue<pii>q;
    q.push({k,-1});

    while(!pq.empty()){
        pii x=q.front();
        int node=x.first;
        int par=x.second;
        q.pop();

        for(auto it: arr[node]){
            if(!vis[it]){
                q.push(it,node);
                vis[it]=1;
            }
            else if(vis[it]){
                if(it!=par){
                    return true;
                }
            }
        }

    }
    return false;
}

bool iscycle(int v,vector<int>arr[]){
    vector<int>vis(v+1,0);
    for(int i=1; i<=v; i++){
        if(!vis[i]){
            vis[i]=1;
            if(checkcycle(i,arr,vis)){
                return true;
            }
        }
        
    }
    return false;
}
int main(){
    
    return 0;
}