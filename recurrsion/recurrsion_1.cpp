#include <iostream>
using namespace std;
int power(int n, int p){
    if(p==0){
        return 1;
        
    }
    int previous_power= power(n, p-1);
        return n*previous_power;
}
int factorial(int n){
    if(n==0){
        return 1;
    }
    int prev_fact=factorial(n-1);
    return n*prev_fact;
}
int fibbo_no(int n){
    if(n==0){
        return 0;
    }
    if(n==1){
        return 1;
    }
    return fibbo_no(n-1)+fibbo_no(n-2);
}

int main(){
    //cout<<power(2,4);
    //cout<<factorial(4);
    cout<<fibbo_no(5);
    
    return 0;
}