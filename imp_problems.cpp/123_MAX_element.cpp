#include <iostream>
using namespace std;

int peakElement(int arr[], int start, int end,int n){

    while(start<=end){
        int mid= start+(end-start)/2;

        if(arr[mid]> arr[mid-1] && arr[mid]>arr[mid+1]){
            return mid;
        }

        else if(arr[mid+1]>arr[mid]){
            return peakElement(arr,mid+1,end,n);
        }

        else if(arr[mid]<arr[mid-1]){
            return peakElement(arr,start,mid-1,n);

        }
        else if(mid==0){
            if(arr[mid+1]< arr[mid]){
                return mid;
            }
        }
        else if(mid==n-1){
            if(arr[n-1]> arr[n-2]){
                return arr[n-1];
            }
        }


    }
    return -1;
}


    int main()
    {
        int arr[] = {10, 20, 15, 2, 23, 90, 67};
        int n = 7;
        cout << peakElement(arr, 0, 6,7);

        return 0;
    }
