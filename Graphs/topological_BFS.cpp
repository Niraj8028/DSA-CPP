#include <iostream>
#include <queue>
#include <vector>
using namespace std;

vector<int>toposort(int n,vector<int>adj[]){
    queue<int>q;
    vector<int>indegree(n,0);
    vector<int>ans;

    for(int i=0; i<n; i++){
        for(auto it: adj[i]){
            indegree[it]++;
        }
    }
    for(int i=0; i<n; i++){
        if(indegree[i]==0){
            q.push(i);
        }
    }
    while(!q.empty()){
        int temp=q.front();
        q.pop();
        ans.push_back(temp);
        for(auto it: adj[it]){
            indegree[it]--;

            if(indegree[it]==0){
                q.push(it);
            }
        }

    }
    return ans;
}
int main(){
    
    return 0;
}