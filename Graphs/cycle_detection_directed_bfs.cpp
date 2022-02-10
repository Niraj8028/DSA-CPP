#include <iostream>
#include <queue>
#include <vector>
using namespace std;

bool iscycle(int n, vector<int>adj[]){
    queue<int>q;
    vector<int>indegree(n,0);

    for(int i=0; i<n; i++){
        for(auto it : adj[i]){
            indegree[it]++;
        }
    }
    for(int i=0; i<n; i++){
        if(indegree[i]==0){
            q.push(i);
        }
    }
    int count=0;
    while(!q.empty()){
        int temp=q.front();
        q.pop();
        count++;
        for(auto it: adj[temp]){
            indegree[it]--;
            if(indegree[it]==0){
                q.push(it);
            }
        }
    }
    if(count==n){
        return false;
    }
    return true;

}

int main(){
    int v,e;
    cin>>e>>v;
    vector<int>adj[v];
    for(int i=0; i<e; i++){
        int m,n;
        cin>>m>>n;
        adj[m].push_back(n);
        adj[n].push_back(m);
        
    }
    
    return 0;
}