#include <iostream>
using namespace std;
int main(){
    int m,n;
    cin>>m>>n;
    int target;
    cin>>target;
    int arr[m][n];
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            cin>>arr[i][j];
        }
    }
    
    int r=0; int c=n-1;
    bool found=false;
    while(r<m && c>=0){
        if(arr[r][c]==target){
            found=true;
        }
        else if(arr[r][c]>target){
            c--;
        }
        else{
            r++;
        }
    }
    if(found){
        cout<<"Element found\n";
    }
    else{
        cout<<"Not found";
    }
    
}