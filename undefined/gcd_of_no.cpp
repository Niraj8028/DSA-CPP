#include <iostream>
using namespace std;

int GCD(int a, int b){
    while(b!=0){
    int rem=a%b;
    a=b;
    b=rem ;
    }
    return a;
}
int main(){
    cout<<GCD(84,24);
    
    return 0;
}