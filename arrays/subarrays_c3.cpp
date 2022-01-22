#include <iostream>
#include <climits>
using namespace std;
int main(){
    int n,sum;
    int maxsum=INT_MIN;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    for(int i=0; i<n; i++){
        for(int j=i; j<n; j++){
            sum=0;
            for(int k=i; k<=j; k++){
                 sum=sum+arr[k];
                
            }
            maxsum=max(maxsum,sum);
            
        }
    }
    cout<<maxsum;
    return 0;
}