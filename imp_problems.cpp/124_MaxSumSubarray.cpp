#include <iostream>
#include <climits>
using namespace std;

void maxSumSubarray(int arr[], int k,int x,int n){
    int sum=0;
    int ans=0;
    for(int i=0; i<k; i++){
        sum=sum+arr[i];
    }
    for(int i=k; i<n; i++){
        sum=sum-arr[i-k];
        sum=sum+arr[k];
    
        if(sum<x){
        ans=max(ans,sum);
        }
    }
    cout<<ans;
}

int main(){
    int arr[]={7,5,4,6,8,9};
    int k=3;
    int x=20;
    int n=6;
    maxSumSubarray(arr,k,x,n);
    
    return 0;
}