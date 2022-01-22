#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<vector<int>>a;
    for(int i=0; i<n; i++){
        int start,end;
        cin>>start>>end;
        a.push_back({start,end});
    }
    sort(a.begin(),a.end(),[&](vector<int> &b,vector<int>&c){
        return b[1]<c[1];
    });
    int take=1;
    int end=a[0][1];
    for(int i=1; i<n; i++){
        if(a[i][0]>=end){
            take++;
            end=a[i][1];
        }
    }
    cout<<take;

    return 0;
}