#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    char arr[n+1];
    cin>>arr;
    bool check=true;
    for(int i=0; i<n;i++){
        if(arr[i]!=arr[n-1-i]){
            check=false;
            break;
        }
    }
    if(check){
        cout<<"palindrome";
    
    }
    else{
        cout<<"not a palindrome";
    }
    return 0;
}