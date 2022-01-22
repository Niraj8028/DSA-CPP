#include <iostream>
#include <unordered_map>
using namespace std;

int countSubarray(int arr[],int n){
    unordered_map<int,int>mp;
    int sum=0;
    int ans=0;
    for(int i=0; i<n; i++){
        sum=sum+arr[i];
        mp[sum]++;
        if(arr[i]==0){
            ans++;
        }
    }
    
    
    unordered_map<int,int>::iterator it;
    for(it=mp.begin(); it!=mp.end(); it++){
        int c=0;
        c=it->second;
        ans=ans+(c*(c-1))/2;
        if(it->first==0){
            ans+=it->second;
        }
    }
    return ans;
}
int main(){
    int arr[]={1,-1,1,-1};
    int n=4;
    cout<<countSubarray(arr,n);
    
    return 0;
}