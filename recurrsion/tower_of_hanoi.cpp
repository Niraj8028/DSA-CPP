#include <iostream>
using namespace std;
void tower(int n, char src, char des, char helper){
    if(n==0){
        return;
    }
    tower(n-1,src,helper,des);
    cout<<"move from "<<src<<" to destination "<<des<<endl;
    tower(n-1,helper,des,src);
}
int main(){
    //char A,B,C;
    tower(3,'A','C','B');
    
    return 0;
}