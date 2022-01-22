#include "bits/stdc++.h"
using namespace std;

int prevgreater( int arr[],int n){
    stack<int>st;
    for(int i=0; i<n; i++){
        while(!st.empty() && st.top()<=arr[i]){
            st.pop();
        }
        if(st.empty()){
            return arr[i]<<endl;
            st.push(arr[i]);
        }
        else{
            return<<st.top()<<endl;
        }
    }
}
void nextgreater( int arr[],int n){
    stack<int>st;
    for(int i=n-1; i>=0; i--){
        while(!st.empty() && st.top()<=arr[i]){
            st.pop();
        }
        if(st.empty()){
            cout<<arr[i]<<endl;
            st.push(arr[i]);
        
        }
        else{
            cout<<st.top()<<endl;
        }
    }
}
void rainwater(int arr[],int n){
    for(int i=0; i<n; i++){
        int minimum=min(prevgreater[i],nextgreater[i]);
        
    }

}

int main(){
    int arr[]={10,4,2,40,12,3};
    int n=6;
    nextgreater(arr,6);
    return 0;
}