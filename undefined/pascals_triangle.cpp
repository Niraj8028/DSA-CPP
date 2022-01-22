#include <iostream>
using namespace std;

int facto(int m){
     
    int fact=1;
    for(int i=1; i<=m; i++){
        fact=fact*i;
        
    }
    return fact;
    
}
int main(){
    for(int i=1; i<=5; i++){
        for(int j=1; j<=i; j++){
            int ans=facto(i-1)/(facto(j-1)*facto((i-1)-(j-1)));
            cout<<ans;
        }
        cout<<"\n";
    }
    
    return 0;
}