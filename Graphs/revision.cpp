#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

class node{
    public:
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
    return parent[a]=findparent(parent[a],parent);
}
void unions(int a,int b,vector<int>&parent,vector<int>&level){
    a=findparent(a,parent);
    b=findparent(b,parent);

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
int krushkalsAlgo(int n,vector<node>adj,vector<pair<int,int>>&mst){
    sort(adj.begin(), adj.end(),compare);
    vector<int>parent;
    vector<int>level(n,0);
    
    int cost=0;
    for(int i=0; i<n; i++){
        parent[i]=i;
    }
    for(auto it: adj){
        if(findparent(it.u,parent)!=findparent(it.v,parent)){
            
            cost+=it.wt;
            mst.push_back({it.u,it.v});
            unions(it.u,it.v,parent,level);
        }
    }
    return cost;
}
int main(){
    int m,n;
    cin>>m>>n;
    vector<node>adj;
    vector<pair<int,int>>mst;
    for(int i=0; i<n; i++){
        int a,b,c;
        cin>>a>>b>>c;
        adj.push_back(node(a,b,c));

    }
    cout<<krushkalsAlgo(n,adj,mst);
    // for(auto it: mst){
    //     cout<<it.first<<" "<<it.second;
    // }

    return 0;
}