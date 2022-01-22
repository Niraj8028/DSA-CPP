#include <iostream>
using namespace std;
# define n 4
class stack{
    int* arr;
    int top;
    public:
    stack(){
        arr=new int[n];
        top=-1;
    }

void push(int val){
    if(top==n-1){
        cout<<"stavk overflow";
    }
    top++;
    arr[top]=val;

}
void pop(){
    if(top==-1){
        cout<<"stack is empty";
    }
    top--;
}
int Top(){
    if(top==-1){
        cout<<"stack is empty";
        return -1;
    }
    return arr[top];
}
bool empty(){
    return top==-1;
}
};
int main(){
    stack st;
    // st.push(1);
    // st.push(4);
    // st.push(2);
     st.push(6);
     st.push(3);
    // cout<<st.Top();
    st.pop();
    cout<<st.Top()<<endl;
    cout<<st.empty()<<endl;
    
    
    return 0;
}