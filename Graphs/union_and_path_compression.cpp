#include <iostream>
using namespace std;
int parent=[10000];
int rank=[10000];

void makesets(int n){
    for(int i=1; i<=n; i++){
        parent[i]=i;
        rank[i]=0;
    }
}
int findParent(int a){
    if(parent[a]==a){
        return a;
    }
    return parent[a]=findParent(parent[a]);
}
void union(int a,int b){
    a=findParent(a);
    b=findParent(b);

    if(rank[a]>rank[b]){
        parent[b]=a;
    }
    else if(rank[b]>rank[a]){
        parent[a]=b;
    }
    else {
        parent[a]=b;
        rank[b]++;
    }
}
int main(){
    makesets();
    
    return 0;
}