#include <iostream>
#include <queue>
#include <climits>
using namespace std;


#define pii pair<int,int>
void primsAlgo(int n, vector<pii>adj[],int src){
    int dist[n];
    bool vis[n];
    int parent[n];

    for(int i=0; i<n; i++){
        dist[i]=INT_MAX;
        vis[i]=false;
        parent[i]=-1;
    }
    dist[src]=0;
    priority_queue<pii,vector<pii>,greater<pii>>pq;
    pq.push({0,src});
    

    for(int count=0; count<n-1; count++){
        pii x=pq.top();
        pq.pop();
        int node=x.second;
        vis[src]=true;

        for(auto it: adj[node]){
            int child=it.first;
            int wt=it.second;

            if(vis[child]==false && dist[child]>wt){
                
                parent[child]=node;
                pq.push({dist[child],child});
                dist[child]=wt;
            }
        }

    }
}

int main(){
    
    return 0;
}