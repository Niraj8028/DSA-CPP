#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool compare(pair<int,int>&a,pair<int,int>&b){

    double(val1)=(double)a.first/a.second;
    double(val2)=(b.first)/b.second;
    return val1>val2;
}
int main(){
    int n;
    cin>>n;
    vector<pair<int,int>>v(n);
    for(int i=0; i<n; i++){
        cin>>v[i].first>>v[i].second;
    }
    int w;
    cin>>w;
    int value=0;
    sort(v.begin(), v.end(), compare);
    for(int i=0; i<n; i++){
        if(w>=v[i].second){
            value+=v[i].first;
            w-=v[i].second;
        }
        else{
            double vw=(double)v[i].first/v[i].second;
            value+=vw*w;
            w=0;
            break;

        }
    }
    cout<<value;

    return 0;
}