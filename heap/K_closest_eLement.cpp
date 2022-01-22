#include <iostream>
#include <queue>
#include <cmath>
using namespace std;

void Closest_K_elements(int arr[],int n,int k, int x){
    priority_queue<pair <int, int>>q;

    for(int i=0; i<k; i++){
        q.push({abs(arr[i]-x),i});
    }
    for(int i=k; i<n; i++){
        int diff=abs(arr[i]-x);

        if(diff<q.top().first){
            q.pop();
            q.push({diff,i});
        }
    }
    while(q.size()>0){
        cout<<arr[q.top().second];
        q.pop();
    }   
}

int main(){
    int arr[]={5,6,7,8,9};
    int n=5;
    int k=3;
    int x=7;
    Closest_K_elements(arr,n,k,x);
    
    return 0;
}