#include <iostream>
using namespace std;
int main(){
    int marks[4]={24,55,78,56};
    cout<<"this are marks\n";
    cout<<marks[0]<<endl;
    cout<<marks[1]<<endl;
    cout<<marks[2]<<endl;
    cout<<marks[3]<<endl;
    cout<<"age is ";

    int age[4];
    age[0]=45;
    age[1]=54;
    age[2]=76;
    age[4]=34;
    cout<<age[0]<<endl;
    cout<<age[1]<<endl;
    cout<<age[2]<<endl;
    cout<<age[3]<<endl;

    for(int i=0; i<=3; i++)
    {
        cout<<"The valuse of marks "<<marks[i]<<endl;
    }
    int i=0;
    while(i<4){
        cout<<"THe value of marks is"<<age[i]<<endl;
        i++;


    }
    int*p=marks;
    cout<<"the value of marks[0]"<<*p<<endl;
    cout<<"the value of marks[1]"<<*(p+1)<<endl;
    cout<<"the value of marks[3]"<<*(p+2)<<endl;
    cout<<"the value of marks[2]"<<*(p+3)<<endl;
    
    
    return 0;
}