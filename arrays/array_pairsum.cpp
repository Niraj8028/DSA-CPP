#include <iostream>
using namespace std;

bool pairsum(int arr[], int n, int k){
    int low=0;
    int high=n-1;
    while(low<high){
        if(arr[low]+arr[high]==k){
            cout<<low<<" "<<high;
            return true;
        }
        else if( arr[low]+arr[high]>k){
            high--;
        }
        else{
            low++;
        }

    }
    return false;
}
int main(){
    int n;
    
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    pairsum(arr,n,31);
    return 0;
}
