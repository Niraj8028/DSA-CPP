#include <iostream>
using namespace std;

/*void bubble_sort(int arr[],int n){
    int counter=1;
    while(counter<n-1 ){
        for(int i=0; i<n-counter; i++){
            if(arr[i]>arr[i+1]){
                int temp;
                temp=arr[i];
                arr[i]=arr[i+i];
                arr[i+1]=temp;

            }
            
        }
        counter++;
        
    }
   
}*/
//void printarray(int arr[],int n){
    //for(int i=0; i<n; i++){
   //     cout<<arr[i]<<" ";
   // }
//w}
int main(){
    int n;
    cout<<"enter the size of array";
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int counter=1;
    while(counter<=n){
        for(int i=0; i<n-counter; i++){
            if(arr[i]>arr[i+1]){
                int temp;
                temp=arr[i];
                arr[i]=arr[i+1];
                arr[i+1]=temp;
            }
        }
        counter++;
    }
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    
    
    return 0;
}