#include <iostream>
#include <stack>
using namespace std;

void prevsmall(int arr[],int n){
    stack<int>st;
    for(int i=0; i<n; i++){
        while(!st.empty() && st.top()>=arr[i]){
            st.pop();
        }
        if(st.empty()){
            cout<<"_";
        }
        else {
            cout<<st.top();
        }
        st.push(arr[i]);
    }
}
void prevlarge(int arr[],int n){
    stack<int>st;
    for(int i=0; i<n; i++){
        while(!st.empty() && st.top()<=arr[i]){
            st.pop();
        }
        if(st.empty()){
            cout<<"_";
        }
        else{
            cout<<arr[i];
        }
        st.push(arr[i]);
    }
}
void nextsmall(int arr[], int n){
    stack<int>st;
    for(int i=n-1; i>=0; i--){
        while(!st.empty() && st.top()>=arr[i]){
            st.pop();
        }
        if(st.empty()){
            cout<<"_";
        }
        else {
            cout<<st.top();
        }
        st.push(arr[i]);
    }
}

int main(){
    int arr[]={9,3,7,5,2};
    int n=5;
    // cout<<"Prev small ele are : "<<endl;
    // prevsmall(arr,n);
    // cout<<"prevlarge elements are :"<<endl;
     prevlarge(arr,n);
    // cout<<"next small elements are :";
    // nextsmall(arr,n);
    
    
    return 0;
}