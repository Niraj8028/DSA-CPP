#include <iostream>
using namespace std;
int main(){
    int m,n;
    cin>>m>>n;
    int arr[m][n];
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            cin>>arr[i][j];
        }
    }
    int k=0;
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            if(arr[i][j]==k){
                cout<<i<<" "<<j;
                
            }
        }
        cout<<"\n";
    }
    
    return 0;
}