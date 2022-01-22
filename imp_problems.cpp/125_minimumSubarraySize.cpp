#include <iostream>
using namespace std;

int SubarraySize(int arr[],int x,int n){
    int ans=n+1;
    int sum=0;
    int start=0; int end=0;
    while(end<n){
        while(sum<=x){
            sum=sum+arr[end];
            end++;
        }
        while(sum>x && start<n){
            if(end-start<ans){
                ans=end-start;
            }
            sum=sum-arr[start];
            start++;
        }
    }
    return ans;
}
int main(){
    int arr[]={1,4,45,6,10,19};
    int x=51;
    int n=6;
    int ans=SubarraySize(arr,x,n);
    cout<<ans;
    
    return 0;
}