#include <iostream>
using namespace std;
int main(){
    int n=7,pd;
    int ans=2;
    int curr=2;
    int arr[n]={10,7,9,5,8,10,11};
    pd=arr[1]-arr[0];
    for(int i=2; i<n; i++){
        if(arr[i]-arr[i-1]==pd){
            curr=curr+1;;
        }
        else{
            pd=arr[i]-arr[i-1];
            curr=2;
        }
        ans=max(ans,curr);
        
    }
    cout<<"ans is "<<ans;
    

    return 0;
}