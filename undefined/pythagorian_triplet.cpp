#include <iostream>
using namespace std;

int triplet(int a, int b, int c){
    int e=max(a,max(b,c));

    int m,n;
    if(e==a){
        m=b;
        n=c;
    }
    else if(e==b){
        m=a;
        n=c;
    }
    else{
        m=a;
        n=b;
    }
    int d=m*m+n*n;

    if (d==e*e){
        cout<<"pythagorus triplet"<<endl;
    }
    else{
        cout<<" not a triplet"<<endl;
    }
    return 0;
}
int main(){
    int x, y, z;
    cout<<"enter the nos:"<<endl;
    cin>>x>>y>>z;
    triplet(x,y,z);


    
    return 0;
}