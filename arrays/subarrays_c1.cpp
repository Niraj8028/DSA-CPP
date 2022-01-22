#include <iostream>
#include <climits>
using namespace std;
int main(){
    
    int n=8;
    int count=0;
    int arr[n+1]={1,2,0,7,2,0,2,2};
    arr[n]=-1;
 for(int i=1; i<n; i++){
     int max=arr[i-1];
    if(arr[i]>max && arr[i]>arr[i+1]){
        count++;
        max=arr[i];
    }
 }
   
cout<<count;

    
    return 0;
}