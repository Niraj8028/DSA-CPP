#include <iostream>
#include <vector>
using namespace std;

int main(){
    int m,n;
    cin>>m>>n;
    vector<vector<int>>adjm(n+1,vector<int>(n+1,0));
    for(int i=0; i<m; i++){
        int x,y;
        cin>>x>>y;
        adjm[x][y]=1;
        adjm[y][x]=1;
    }
    for(int i=1; i<n+1; i++){
        for(int j=1; j<n+1;j++){
            cout<<adjm[i][j]<<" ";
        }
        cout<<endl;
    }
    if(adjm[7][1]==1){
        cout<<"There is a edge between ";
    }
    else{
        cout<<"no edge";
    }

    vector<int>adj[100];
    for(int i=1; i<m ; i++){
        int x,y;
        cin>>x>>y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
    for(int i=1; i<=n; i++){
        cout<<i<<"->";
        vector<int>:: iterator it;
        for(it=adj[i].begin(); it!=adj[i].end(); it++){
            cout<<*it<<" ";


        }
        cout<<endl;
    }
    return 0;
}