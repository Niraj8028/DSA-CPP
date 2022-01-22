#include <iostream>
using namespace std;

class poly{
public:
    void fun(){
        cout<<"fun"<<endl;
    }
    void fun(int x){
        cout<<"fun with int"<<endl;
    }

};
int main(){
    poly obj;
    obj.fun();
    obj.fun(4);
    
    return 0;
}