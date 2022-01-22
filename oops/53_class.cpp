#include <iostream>
using namespace std;

class students{
    public:
    string name;
    int age;
    bool gender;
    students(string s, int a, bool g){
        name=s;
        age=a;
        gender=g;
    }

    void printinfo(){
        cout<<"name= ";
        cout<<name<<endl;
        cout<<"age= ";
        cout<<age<<endl;
        cout<<"Gender= ";
        cout<<gender<<endl;
    
    }
};
int main(){
    // student a;
    // a.name='niraj';
    // a.age=18;
    // a.gender=1;
    // students arr[3];
    // for(int i=0; i<3; i++){
    //     cout<<"Name= ";
    //     cin>>arr[i].name;
    //     cout<<"Age= ";q
    //     cin>>arr[i].age;
    //     cout<<"Gender= ";
    //     cin>>arr[i].gender;
    // }
    // for(int i=0; i<3; i++){
    //     arr[i].printinfo();
    // }
    students c("Niraj", 20 , 1);
    students d("suraj", 21, 1);
    c.printinfo();
    d.printinfo();
    return 0;
}