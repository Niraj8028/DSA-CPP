#include <iostream>
using namespace std;

int main(){
    int age;
    cout<<"Enter your age"<<endl;
    cin>>age;
    if(age<18){
        cout<<"you cannot come to party"<<endl;
    }
    else if(age==18){
        cout<<"you can come but dont drink"<<endl;
    }
    else{
        cout<<"you can come to party"<<endl;
    }
}