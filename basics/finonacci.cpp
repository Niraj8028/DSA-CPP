#include <iostream>
using namespace std;
void fibo(int n){
    int t1=0;
    int t2=1;
    int sum=0;
    for(int i=1; i<=n; i++){
        cout<<t1<<endl;
        t1=t2;
        sum=sum+t2;
        t2=sum;
    }

}
int main(){
    int m;
    cout<<"enter the no;"<<endl;
    cin>>m;
    fibo(m);

    
    return 0;
}