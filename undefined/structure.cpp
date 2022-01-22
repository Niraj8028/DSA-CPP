#include <iostream>
using namespace std;

struct employee{
    int id;
    char city;
    float salary;
};
int main(){
    struct employee niraj;
    niraj.id=12;
    niraj.city='s';
    niraj.salary=12000000;
    cout<<"The id is "<<niraj.id<<endl;

    
    return 0;
}