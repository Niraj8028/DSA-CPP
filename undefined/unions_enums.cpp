#include <iostream>
using namespace std;

union money{
//we can use any one of this not all
    int rupees;//4
    float usd;//4
    char btc;//1
    //used for memory management

};

int main(){
    union money m1;
    m1.rupees=15;
    cout<<m1.rupees<<endl;

    
    return 0;
}