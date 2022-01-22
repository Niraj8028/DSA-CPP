#include <iostream>
using namespace std;

int searchInRotatedArr(int arr[],int key,int left,int right){
    if(left>right){
        return -1;
    
    }
    int mid=(left+right)/2;
    if(arr[mid]==key){
        return mid;
    }
    if(arr[left]<=arr[mid]){
        if(key > arr[left] && key<arr[mid]){
            return searchInRotatedArr(arr,key,left,mid-1);
        }
        return searchInRotatedArr(arr,key,mid+1,right);
    }
    if(key< arr[right] && key> arr[mid]){
        return searchInRotatedArr(arr,key,mid+1,right);
    }
    return searchInRotatedArr(arr,key,left,mid-1);
}
int main(){
    int arr[]={5,6,7,8,9,1,2,3};
    int n=8;
    int key=1;
    cout<<searchInRotatedArr(arr,key,0,7);
    
    
    return 0;
}