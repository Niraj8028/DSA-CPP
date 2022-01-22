#include <iostream>
#include <stack>
using namespace std;

class que{
    stack<int >s1;
    stack<int >s2;
    public:

    void push(int x){
        s1.push(x);

    }
    int pop(){
        if(s1.empty() && s2.empty()){
            cout<<"queue is empty";
            return -1;
        }
        if(s2.empty()){
            while(!s1.empty()){
                s2.push(s1.top());
                s1.pop();
            }
        }
        int x=s2.top();
        s2.pop();
        return x;
    }
};

int main(){
    que q;
    q.push(1);
    q.push(2);
    q.push(3);
    cout<<q.pop();
    cout<<q.pop();
    cout<<q.pop();
    
    return 0;
}