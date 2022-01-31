#include <iostream>
using namespace std;
void findsort(int node,vector<int>adj[],vector<int>&vis,stack<int>&st){
	    vis[node]=1;
	    
	    for(auto it: adj[node]){
	        if(!vis[it]){
	            findsort(it,adj,vis,st);
	        }
	    }
	    st.push(node);
	}
	
	vector<int> topoSort(int V, vector<int> adj[]) 
	{
	    stack<int>st;
	    vector<int>vis(V,0);
	    
	    for(int i=0; i<V; i++){
	        if(!vis[i]){
	            findsort(i,adj,vis,st);
	            
	        }
	    }
	    vector<int>ans;
	    while(!st.empty()){
	        ans.push_back(st.top());
	        st.pop();
	    }
	    return ans;
	}
int main(){
    
    return 0;
}