#include <iostream>
using namespace std;
int main(){
    int a;
    int rem;
    int quo=0;
    cout<<"enter the no: "<<endl;
    cin>>a;
    int new_a=a;
    while(a>0){
        rem=a%10;
        quo=(quo)+rem*rem*rem;
        a=a/10;
    }
    
    
    if(new_a==quo){
        cout<<"the is armstrong no;"<<endl;
    }
    else{
        cout<<"the no is not armstrong";
    }

    return 0;
}