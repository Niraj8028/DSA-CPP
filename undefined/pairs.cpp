#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool mycompare(pair<int ,int>v1, pair<int ,int >v2){
    return v1.first<v2.first;
}
int main(){
    int arr[]={10,16,7,14,5,3,12,9};
    vector< pair < int,int> >v;
    for(int i=0; i<8;i++){
        v.push_back(make_pair(arr[i],i));
    }
    sort(v.begin(),v.end(),mycompare);
    for(int i=0; i<8; i++){
        arr[v[i].second]=i;
    }
    for(int i=0; i<8; i++){
        cout<<arr[i]<<" ";
    }
    
    
}