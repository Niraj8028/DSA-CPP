#include <iostream>
#include <climits>
using namespace std;
int main(){
    int n;
    
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int max_sum=INT_MIN;
    int current_sum=0;
    for(int i=0; i<n; i++){
        current_sum+=arr[i];
        if(current_sum<0){
            current_sum=0;
        }
        
    }
    
    cout<<max_sum;
    return 0;
}