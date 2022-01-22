#include <iostream>
using namespace std;
void prime(int n){
    int arr[100]={0};
    for(int i=2; i<n; i++){
        if(arr[i]==0){
            for(int j=i*i; j<n; j+=i){
                arr[j]=1;
            }
        }

    }
    for(int i=2; i<n; i++){
        if(arr[i]==0){
            cout<<i<<" ";
        }
    }
}
int main(){
    int n;
    cin>>n;
    prime(n);
    
    return 0;
}