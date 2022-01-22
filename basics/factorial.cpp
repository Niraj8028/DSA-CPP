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
    int n,r;
    cout<<"enter the no:\n"<<endl;
    cin>>n>>r;;
    int ans=facto(n)/(facto(r)*facto(n-r));
    cout<<ans;
    
    return 0;
}