#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

class node{
    int u;
    int v;
    int wt;
    node(int a,int b,int c){
        int u=a;
        int v=b;
        int wt=c;
    }
};
bool compare(node a,node b){
    return a.wt<b.wt;
}
int findparent(int a,vector<int>&parent){
    if(parent[a]=a){
        return a;
    }
    return parent[a]=findparent(parent[a]);
}
void unions(int x,int b,vector<int>&parent,vector<int>&level){
    x=findparent(x);
    b=findparent(b);

    if(level[a]>level[b]){
        parent[b]=a;
    }
    else if(level[b]>level[a]){
        parent[a]=b;
    }
    else{
        parent[a]=b;
        level[b]++;
    }

}
void krushkalsAlgo(int n,vector<node>adj){
    sort(adj.begin(), adj.end(),compare);
    vector<int>parent;
    vector<int>level(n,0);
    vector<pair<int,int>>mst;
    int cost;
    for(int i=0; i<n; i++){
        parent[i]=i;
    }
    for(auto it: adj){
        if(parent(it.u)!=parent(it.v)){
            
            cost+=it.wt;
            mst.push_back({it.u,it.v});
            unions(it.u,it.v);
        }
    }
    
}
int main(){
    
    return 0;
}