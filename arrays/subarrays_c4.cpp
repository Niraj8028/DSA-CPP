#include <iostream>
#include <climits>
using namespace std;
int kadane(int arr[],int n){
    int sum=0;
    int maxsum=INT_MIN;

    for(int i=0; i<n; i++){
        sum=sum+arr[i];
        if(sum<0){
            sum=0;
        }
        maxsum=max(maxsum,sum);
        
    }
    return maxsum;
}
int main(){
    int n;
    
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    
    int wrapsum;
    int nonwrapsum;
    int sum=0;
    nonwrapsum=kadane(arr,n);
    cout<<nonwrapsum<<"\n";
    for(int i=0; i<n; i++){
        sum=sum+arr[i];
        arr[i]=-arr[i];
    }
    cout<<sum<<"\n";
    cout<<kadane<<"\n";
    
    
    wrapsum=sum+kadane(arr,n);
    cout<<max(wrapsum,nonwrapsum);

    
    return 0;
}