#include <iostream>
#include <algorithm>
using namespace std;

void heapify(int arr[],int n,int i){

    int maxidx=i;
    int left=2*i+1;
    int right=2*i+2;

    if(left<n &&arr[maxidx]<arr[left]){
        maxidx=left;
    }
    if(right<n && arr[maxidx]<arr[right]){
        maxidx=right;
    }
    if(maxidx!=i){
        swap(arr[maxidx],arr[i]);
        heapify(arr,n,maxidx);
    }
}
void heapsort(int arr[],int n){
    for(int i=n-1; i>=0; i--){
        swap(arr[0],arr[i]);
        heapify(arr,i-1,1);
    }
}
int main(){4
    int arr[]={50,20,40,5,10,30};
    int n=6;
    heapsort(arr,n);
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    
    return 0;
}