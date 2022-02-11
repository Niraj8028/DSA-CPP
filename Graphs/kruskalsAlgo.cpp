#include <iostream>
#include <queue>
#include <vector>
using namespace std;
int parent[1000]
int rank[1000]

class node{
    int u;
    int v;
    int wt;
    node(int a,int b, int w){
        u=a;
        v=b;
        wt=w;
    }
};

bool comapre(node a,node b){
    return a.wt<b.wt;
}

void makeset(){
    for(int i=0; i<n; i++){
        parent[i]=i;
        rank[i]=0;
    }
}

int findParent(int a){
    if(parent[a]=a){
        return a;
    }
    return parent[a]=findparent(parent[a]);
}

void unions(int a,int b){
    a=findparent(a);
    b=findparent(b);
    if(rank[a]>rank[b]){
        parent[b]=a;
    }
    else if( rank[b]>rank[a]){
        parent[a]=b;
    }
    else{
        parent[a]=b;
        rank[b]++;
    }
}

void KruskalsAlgo(int n,vector<node>edges){
    sort(edges.begin(),edges.end(),comapre);
    int cost=0;
    vector<pair<int,int>>mst;
    for(auto it: edges){
        if(findParent(it.u)!=findParent(it.v)){
            cost+=it.wt;
            mst.push_back({it.u,it.v});
            unions(it.u,it.v);
        }
    }
    
}
int main(){
    makeset();
    return 0;
}