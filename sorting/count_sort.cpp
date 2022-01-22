#include <iostream>
using namespace std;
void countsort(int arr[],int n){
    int max=0;
    int i=0,j=0;
    for(int i=0; i<n; i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    int count[max+1]={0};
    for(int i=0; i<n; i++){
        count[arr[i]]=count[arr[i]]+1;
    }
    while(i<=max){
        if(count[i]>0){
            arr[j]=i;
            count[i]--;
            j++;

        }
        else{
            i++;
        }
    }

}
int main(){
    
    int arr[] = {5, 4, 3, 2, 1};
    countsort(arr,5);
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}
    
  