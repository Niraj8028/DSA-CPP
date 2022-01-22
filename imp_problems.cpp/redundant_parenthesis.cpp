#include <iostream>
#include <stack>
using namespace std;

bool redundant(string s){
    stack<char>st;
    
    for(int i=0; i<s.length(); i++){
        if(s[i]==')'){

            if(st.top()=='('){
            return 1;
            }
            else{
                while(st.top()!='('){
                    st.pop();
                }
                st.pop();
            }

        }
        else{
            st.push(s[i]);
        }

    }
    return 0;
}
int main(){
    string s="((a+b))";
    cout<<redundant(s);
    
    return 0;
}