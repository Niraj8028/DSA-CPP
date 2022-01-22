#include <iostream>
using namespace std;

int binary(int x){
    int decimal=0;
    int p=1;
    while(x>0){
        int rem=x%10;
        decimal=decimal+rem*p;
        p*=8;
        x=x/10;
        

    }
    cout<<decimal<<endl;

}

int main(){
    int a;
    cout<<"enter the binary :"<<endl;
    cin>>a;
    binary(a);
    return 0;
}