#include <iostream>
using namespace std;
int main(){
    char arr[100]="apple";
    int i=0;
    while(arr[i]!='\0'){
        cout<<arr[i]<<endl;
        i++;
    }
    for(int i=0; i<5;i++){
        cout<<arr[i]<<" ";
    }
    char a[100];
    cin>>a;
    cout<<a;
    return 0;
}