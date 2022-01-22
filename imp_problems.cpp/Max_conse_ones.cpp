#include <iostream>
using namespace std;

int length(int arr[],int k,int n){
    int count=0;
    int j=-1;
    int ans=0;
    for(int i=0; i<n; i++){
        if(arr[i]==0){
            count++;
        }
        while(count>k){
            j++;
            if(arr[j]==0){
                count--;
            }

        }
        int len=i-j;
        if(len>ans){
            ans=len;
        }

    }
    return ans;
}
int main(){
    int arr[]={1,1,0,1,0,0,1,1,0,1,0,1,1};
    int k,n;
    cin>>k>>n;
    cout<<length(arr,k,n);
    
    return 0;
}