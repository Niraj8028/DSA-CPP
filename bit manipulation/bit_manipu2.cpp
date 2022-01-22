#include <iostream>
using namespace std;
int powerof2(int n){
    return((n & n-1)==0);
}
int no_of_ones(int n){
    int count=0;
    while(n!=0){
        n=(n & n-1);
        count++;
    }
    return count;
}
void subarrays(int arr[],int n){
    for(int i=0; i<(1<<n); i++){
        for(int j=0; j<n; j++){
            if( i & (1<<j)){
                cout<<arr[j]<<' ';
            }
        }
        cout<<endl;
    }
}
int main(){
    //cout<<powerof2(5);
    //cout<<no_of_ones(15);
    int arr[4]={1,2,3};
    subarrays(arr,3);
    
    return 0;
}