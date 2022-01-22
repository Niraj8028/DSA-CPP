#include <iostream>
#include <queue>
using namespace std;
void SortingKSortedArrray(int arr[], int n, int k){

    priority_queue<int, vector<int>, greater<int> >pq;
    int j=0;
    for(int i=0; i<n; i++){
        pq.push(arr[i]);
        if(pq.size()>k){
            arr[j++]=pq.top();
            pq.pop();

        }
    }
    while(pq.size()>0){
            arr[j]=pq.top();
            pq.pop();
            j++;
    }
}

void print_array(int *arr, int n)
{
    for(int i=0; i<n; i++){
    cout<<arr[i]<<" ";
    }
}
  
int main(){
    int arr[] = {6, 5, 3, 2, 8, 10, 9};
    int n = sizeof(arr)/sizeof(arr[0]);
    int k=3;
    SortingKSortedArrray(arr,n,k);
    print_array(arr, n);
    
    return 0;
}