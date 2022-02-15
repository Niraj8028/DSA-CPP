#include <iostream>
#include <vector>
#include <climits>
using namespace std;

class node{
    int u;
    int v;
    int w;
    node(int a, int b, int c){
        u=a;
        v=b;
        w=c;
    }
};

void bellmanFord(vector<node>adj,int n,int src){
    vector<int>dist(n,INT_MAX);
    dist[src]=0;
    for(int i=1; i<=n-1; i++){
        for(auto it : adj){
            if(dist[it.u]+it.w<dist[it.v]){
                dist[it.v]=dist[it.u]+it.w;
            }
        }
    }
    int true=0;
    for(auto it : adj){
        if(dist[it.u]+it.w<dist[it.v]){
            true=1;
            break;
        }
    }
    if(!true){
        for(int i=0; i<n; i++){
            cout<<dist[i];
        }
    }

}

int main(){
    
    return 0;
}