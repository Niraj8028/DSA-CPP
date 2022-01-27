#include <iostream>
#include <vector>
#include <queue>
using namespace std;

vector<int>BFSofGraph(vector<int>adj[],int v){
    vector<int>bfs;
    vector<int>vis(v+1,0);

    for(int i=1;i<=v; i++){
        if(!vis[i]){
            queue<int>q;
            q.push(i);
            vis[i]=1;
        }
        while(!q.empty()){
            int node=q.front;
            q.pop();
            bfs.push_back(node);

            vector<int>:: iterator it;
            for(it=adj[node].begin(); it!=adj[node].end(); it++){
                if(!vis[it]){
                    q.push(it);
                    vis[it]=1;
                }

            }
        }
    }
    return bfs;
}
int main(){
    vector<int>adj[]={(5,4),()}
    
    return 0;
}