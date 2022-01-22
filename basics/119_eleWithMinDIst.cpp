#include <iostream>
#include <algorithm>
using namespace std;

bool feasible(int mid,int arr[], int n, int k){
    int element=1;
    int pos=arr[0];

    for(int i=1; i<n; i++){

        if(arr[i] - pos >= mid){
            
            pos=arr[i];
            element++;
        
            if(element==k){
                return true;
            }
        }
    }
    return false;
}
int eleMaxDist(int arr[],int n, int k){

    sort(arr, arr+n);

    int left=1;
    int right=arr[n-1];
    int res=-1;

    while(left<right){
        int mid=(left+right)/2;

        if(feasible(mid,arr,n, k)){
            res=max(res,mid);
            left=mid;
        }
        else{
            right=mid;
        }
    }
    return res;

}
int main(){
    int arr[]={1,2,8,4,9};
    int n=5;
    int k=3;
    cout<<eleMaxDist(arr,n,k);
    
    return 0;
}