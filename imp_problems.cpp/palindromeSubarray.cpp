#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

bool ispalindrome(int num){
    int temp=num;

    int n=0;
    while(temp>0){
        n=n*10+temp%10;
        temp=temp/10;
    }

    if(n==num){
        return true;
    }
    return false;
}

int Subarray(vector<int>arr,int k){
    int num=0;
    for(int i=0; i<k; i++){
        num=num*10+arr[i];
    }
    if(ispalindrome(num)){
        return 0;
    }
    for(int j=k; j<arr.size(); j++){
        num=((num% (int)pow(10,k-1))*10)+arr[j];
        if(ispalindrome(num)){
            return j-k+1;
        }
    }
    return -1;
}

int main(){
    vector<int>arr={2,3,5,1,1,5};
    int n=4;
    int idx=Subarray(arr,n);
    cout<<idx;
    for(int i=idx; i<idx+n; i++){
        cout<<arr[i]<<" ";
    }
    
    return 0;
}