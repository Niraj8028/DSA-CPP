#include <iostream>
using namespace std;
class a{
    public:
    void func(){
        cout<<"a";
    }
};
class B : public a {
    public:
    
    void bfunc(){
        cout<<"b";
    }
};
class C : public B {
    public:
    
};
int main(){
    C c;
    c.func();
    c.bfunc();
    
    return 0;
}