#include <iostream>
#include <climits>
using namespace std;
int main(){
    int n=7;
    int arr[n]={1,3,2,2,7,5,6};
    int m=1000;
    int mind=INT_MAX;
    int idx[m];
    for(int i=0; i<m; i++){
        idx[i]=-1;
    }
    for(int i=0; i<n; i++){
        if(idx[arr[i]]!=-1){
            mind=min(mind,idx[arr[i]]);

        }
        else{
            idx[arr[i]]=i;
        }
    }
    cout<<mind<<" ";
    
    return 0;
}