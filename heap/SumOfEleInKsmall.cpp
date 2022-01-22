#include <iostream>
#include <queue>
using namespace std;

int ksmallestEle(int arr[],int k ,int n){
    priority_queue<int ,vector<int>>pq;
    for(int i=0; i<n; i++){
        pq.push(arr[i]);

        if(pq.size()>k){
            pq.pop();
        }
    }
    return pq.top();
}
int main(){
    int arr[]={1,2,3,4,5};
    int n=5;
    int first=ksmallestEle(arr,2,n);
    int second=ksmallestEle(arr,5,n);
    int sum=0;
    for(int i=0; i<n; i++){
        if(arr[i]>first && arr[i]<second){
            sum=sum+arr[i];
        }
    }
    cout<<sum;
}