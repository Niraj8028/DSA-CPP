#include <iostream>
using namespace std;
int main(){
    int max=0;
    int n=6;
    int arr[]={3,6 ,8,3,2,34};
    for(int i=0; i<n; i++){
        if(arr[i]>=max){
            max=arr[i];
            cout<<"max element till "<<i+1<<" iteration is ";
            cout<<max<<" \n";

        }
        else if(arr[i]<max){
            cout<<"max elemwnt till "<<i+1<<" iteration is ";
            cout<<max<<"\n";
        }

        }

    
    return 0;
}