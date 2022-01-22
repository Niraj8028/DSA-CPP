#include <iostream>
#include <queue>
using namespace std;

void kSmallestEle(int arr[],int k, int n){
    priority_queue<int, vector<int> >maxh;

    for(int i=0; i<n; i++){
        while(maxh.size()<k){
            maxh.push(arr[i]);
        }
        if(arr[i]<maxh.top()){
            maxh.pop();
            maxh.push(arr[i]);
        }
    }
    while (maxh.size()>0){
        cout<<maxh.top();
        maxh.pop();
    }
    
    
}
void kLargestElement(int arr[],int n, int k){
    priority_queue<int , vector<int>, greater<int> >pq;

    for(int i=0; i<n; i++){
        while(pq.size()<k){
            pq.push(arr[i]);
        }
        if(arr[i]>pq.top()){
            pq.pop();
            pq.push(arr[i]);
        }
        
        
    }
    while (pq.size()>0){
        cout<<pq.top();
        pq.pop();
    }
    
    
}

int main(){
    int n=6;
    int arr[]={7,10,4,3,20,15};
    kLargestElement(arr,6,3);

    
    return 0;
}