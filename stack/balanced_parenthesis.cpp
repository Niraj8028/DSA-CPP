#include <iostream>
#include <stack>
using namespace std;

bool is_balance(string s){
    bool ans=true;
    int n=s.size();
    stack<char>st;

    for(int i=0; i<n; i++){
        if(s[i]=='(' || s[i]=='[' || s[i]=='{'){
            st.push(s[i]);
        }
        else if(s[i]==')'){
            if(st.top()=='('){
                st.pop();
            }
            else{
                ans=false;
                break;
            }
        }
        else if(s[i]==']'){
            if(st.top()=='['){
                st.pop();
            }
            else{
                ans=false;
                break;
            }
        }
        else if(s[i]=='}'){
            if(st.top()=='{'){
                st.pop();
            }
            else{
                ans=false;
                break;
            }
        }
    }
    if(!st.empty()){
            ans=false;
        }
    return ans;
}
int main(){
    string s="{[()]}";
    if(is_balance(s)){
        cout<<"valid";
    }
    else{
        cout<<"invalid";
    }
    
    return 0;
}