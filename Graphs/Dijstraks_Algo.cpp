#include <iostream>
#include <vector>
#include <queue>
#include <climits>
using namespace std;
#define pii pair<int,int>

void DijkstraAlgo(int n,vector<pair<int,int>>adj[],int src){
    vector<int>dist(n+1,0);
    priority_queue<pii,vector<pii>,greater<pii>>pq;
    for(int i=0; i<n; i++){
        dist[i]=INT_MAX;

    }
    dist[src]=0;
    pq.push({0,src});
    
    while(!pq.empty()){
        pii x=pq.top();
        pq.pop();
        int temp=x.second;
        int dis=x.first;
        for(auto it: adj[temp]){
            if(dist[it.first]>it.second+dist[temp]){
                dist[it.first]=it.second+dist[temp];
                pq.push({dist[it.first],it.first});
            }
        }
    }
}
int main(){
    
    return 0;
}