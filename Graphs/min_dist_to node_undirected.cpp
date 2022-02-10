#include <iostream>
#include <queue>
#include <climits>
using namespace std;

void minDist(int n, vector<int>adj[],int src){
    int dist[n];
    queue<int>q;
    for(int i=0; i<n; i++){
        dist[i]=INT_MAX;
    }
    dist[src]=0;

    q.push(src);
    while(!q.empty()){
        int temp=q.front();
        q.pop();

        for(auto it:adj[temp]){
            if(dist[it]>dist[temp]+1){
                dist[it]=dist[temp]+1;
                q.push(it);
            }
        }
    }
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