#include <iostream>
#include <queue>
using namespace std;
priority_queue<int ,vector<int> >pq;
void minsequenceWithSumK(int arr[],int n,int k){

    int sum=0; int count=0;

    for(int i=0; i<n; i++){
        pq.push(arr[i]);
    }
    while(!pq.empty()){

        sum=sum+pq.top();
        pq.pop();
        count++;

        if(sum>=k){
            break;
        }
    }

    
    cout<<count<<endl;
    
}
int main(){
    int arr[]={1,1,3,2,8};
    int n=5, k=12;
    minsequenceWithSumK(arr,n,k);
    return 0;
}