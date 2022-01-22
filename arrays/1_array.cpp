#include <iostream>
#include<climits>
using namespace std;


int main(){
    int max=INT_MIN;
    int min=INT_MAX;
    int n;
    cout<<"enter size of an array:"<<endl;
    cin>>n;
    int arr[n];

    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    for(int i=0; i<n; i++){
        if(arr[i]>max){
            max=arr[i];
        }
        if(arr[i]<min){
            min=arr[i];
        }
    }
    cout<<"max is"<<max<<"\nmin is "<<min<<endl;
  
    return 0;
}