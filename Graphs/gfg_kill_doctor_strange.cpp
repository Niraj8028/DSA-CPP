#include <iostream>
#include <vector>
using namespace std;
#define vi vector<int>
#define pii vector<pair<int,int>>

// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends

class Solution{
    public:
    
    
    
    void dfs(int u,vector<int>&dis,vector<int>&low,vector<int>&parent,vector<int>adj[],unordered_set<int>&s)
   {
       static int t=0;
       low[u]=dis[u]=t;
       t++;
       int children=0;
       
       for(auto v:adj[u])
       {
           if(dis[v]==-1)
           {
               children++;
               parent[v]=u;
               dfs(v,dis,low,parent,adj,s);
               
               low[u]=min(low[u],low[v]);
               
               if(parent[u]==-1 and children>1)
               s.insert(u);
               
               if(parent[u]!=-1 and low[v]>=dis[u])
               s.insert(u);
           }
           else if(parent[u]!=v)
           low[u]=min(low[u],dis[v]);
       }
   }
   int doctorStrange(int n, int m, vector<vector<int>> & graph)
   {
        vector<int>adj[n+1];
        
        for(int i=0;i<m;i++)
        {
            adj[graph[i][0]].push_back(graph[i][1]);
            adj[graph[i][1]].push_back(graph[i][0]);
        }
        
        vector<int>dis(n+1,-1),low(n+1,-1),parent(n+1,-1);
        unordered_set<int>s;
        
        for(int i=1;i<=n;i++)
        {
            if(dis[i]==-1)
            dfs(i,dis,low,parent,adj,s);
        }
        
        
        
        return s.size();
   }
    
        
    
};


// { Driver Code Starts.

int main()
 {
    int t;
    cin>>t;
    while(t--)
    {
        int n,m,i;
        cin>>n>>m;
        vector<vector<int>> g(n+1);
        for(i=0;i<m;i++)
        {
            int a,b;cin>>a>>b;
            g[i].push_back(a);
            g[i].push_back(b);
        }
        Solution ob;
        int ans = ob.doctorStrange(n, m, g);
        cout<<ans<<endl;
    }
	return 0;
}  // } Driver Code Ends