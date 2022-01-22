#include <iostream>
using namespace std;

void selection(int arr[],int n){
    int temp ,min;
    for(int i=0; i<n-1; i++){
        min=i;
        for(int j=i+1; j<n; j++){
            if(arr[j]<arr[min]){
                min=j;
            }
        }
        temp=arr[i];
        arr[i]=arr[min];
        arr[min]=temp;
        

    }
}
void printarray(int arr[],int n){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    int n;
    cout<<"enter the size of array";
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    selection(arr,n);
    //for(int i=0; i<n; i++){
    //    cout<<arr[i]<<" ";
    //}
    printarray(arr,n);
    
    
    return 0;
}