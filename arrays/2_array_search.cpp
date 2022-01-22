#include <iostream>
using namespace std;

int binary(int arr[],int n,int key){
    int s=0;
    int e=n;
    
    while(s<=e){
        int mid=(s+e)/2;
        if(arr[mid]==key){
        return mid;
        }
        else if(arr[mid]<key){
        s=mid+1;
        }
        else{
        e=mid-1;
        }
    }
    return -1;
    


}
/*int linear(int arr[],int n,int key){
    for(int i=0; i<n; i++){
        if(arr[i]==key){
            return i;
        }
    }
    return -1;*/


int main(){
    int num;
    cout<<"enter size of an array";
    cin>>num;
    int arr[num];
    for(int i=0; i<num; i++){
        cin>>arr[i];
    }
    int key;
    cout<<"enter key";
    cin>>key;
    cout<<binary(arr,num,key) ;

    return 0;
}