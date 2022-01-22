#include <iostream>
using namespace std;

// bool sorted(int arr[], int n){
//     if(n==1){
//     return true;
//     }
//     bool prevsorted=sorted(arr+1,n-1);
//     return(arr[0]<arr[1] && prevsorted);
// }
void dec(int n){
    if(n==0){
        return;
    }
    cout<<n;
    dec(n-1);
}
void incre(int n){
    if(n==0){
        return;
    }
    incre(n-1);
    cout<<n<<endl;
}
int firstoccurance(int arr[],int n,int i,int key){
    
    if(arr[i]==key){
        return i;
    }
    if(i==n){
        return -1;
    }
    return firstoccurance(arr,n,i+1,key);
}
int lastoccurance(int arr[],int n,int j,int key){
    
    
    if(arr[j]==key){
        return j;
    }
    if(j==0){
        return -1;
    }
    return lastoccurance(arr,n,j-1,key);
    
}
int main(){
    int arr[]={1,2,2,4,5};
    int n=5;
    //cout<<sorted(arr,n);
    //dec(5);
    //incre(5);
    cout<<firstoccurance(arr,5,0,2)<<endl;
    cout<<lastoccurance(arr,5,4,2);
    
    return 0;
}