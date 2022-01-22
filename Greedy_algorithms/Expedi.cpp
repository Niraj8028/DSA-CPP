#include <iostream>
#include <algorithm>
using namespace std;

int stations(int km[],int fuel[],int n){
    for(int i=1; i<n; i++){
        km[0]=km[0];
        fuel[0]=fuel[0];
        km[i]=km[i-1]+km[i];
        fuel[i]=fuel[i-1]+fuel[i];
    }
    sort(fuel.begin(),fuel.end());
    int station=0;
    int i=0; 
    int j=0;
    while(i<n){
        if(km[i]>fuel[j]){
            station++;
        
            j++;
        }
        else{
            i++;
        }
    }
    return station;
}

int main(){
    int km[]={10,4,6,1,4};
    int fuel[]={10,5,2,4,10};
    int n=5;
    cout<<stations(km,fuel,n);
    
    
    return 0;
}