#include <iostream>
using namespace std;
void merge(int arr[],int s, int mid,int e){
    int n1=mid-s+1;
    int n2=e-mid;
    int arr1[n1];
    int arr2[n2];
    // int i=0; int j=0;
    for(int i=0; i<n1; i++){
        arr1[i]=arr[s+i];
    }
    for(int i=0; i<n2; i++){
        arr2[i]=arr[mid+1+i];
    }
    int i=0,j=0;
    int k=s;
    while(i<n1 && j<n2){
        if(arr1[i]<arr2[j]){
            arr[k]=arr1[i];
            k++;
            i++;
        }
        else{
            arr[k]=arr2[j];
            k++;
            j++;
        }
    }
    while(i<n1){
        arr[k]=arr1[i];
        k++; i++;
    }
    while(j<n2){
        arr[k]=arr2[j];
        k++; j++;
    }
}
void mergesort(int arr[],int s,int e){
    if(s<e){
        int mid=(s+e)/2;
        mergesort(arr,s,mid);
        mergesort(arr,mid+1,e);
        merge(arr,s,mid,e);
    }

}
int main(){
    int arr[]={5,4,3,2,1};
    mergesort(arr,0,4);
    for(int i=0; i<5; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    
    return 0;
}