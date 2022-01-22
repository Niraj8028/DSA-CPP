#include <iostream>
using namespace std;
int main(){
    int n,ans=-1;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int N=1e6+2;
    bool check[N];
    for(int i=0; i<N; i++){
        check[i]=false;    
    }
    for(int i=0; i<n; i++){
        if(arr[i]>=0){
            check[arr[i]]=true;
        }
    }
    for(int i=0; i<N;i++){
        if (check[i]==false){
            ans=i;
            break;

        }
        
    }
    cout<<ans;
    
    return 0;
}