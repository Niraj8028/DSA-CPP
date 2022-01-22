#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    cin.ignore();
    char arr[n+1];
    cin.getline(arr, n);
    cin.ignore();
    cout<<arr;
    int i=0;
    int current=0;
    int max=0;
    while(1){
        if(arr[i]==' ' || arr[i]=='\0'){
            if(current>max){
                max=current;
                cout<<current;
            }
            current=0;
        }
        else{
        current++;
        }

        i++;
        if(arr[i]=='\0'){
            break;
        }
        
        

    }
    cout<<max;

    return 0;
}