#include <iostream>
using namespace std;

int main(){
    int age;
    cout<<"Enter your age"<<endl;
    cin>>age;
    switch(age){
    case 18:
        cout<<"your ahe is 18";
        break;
    case 22:
        cout<<"your age is 22";
        break;
    default:
        cout<<"your age";
        break;
    return 0;
    }
}
