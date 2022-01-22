#include <iostream>
using namespace std;
string dupli(string s){
    if(s.length()==0){
        return "";
    }
    char ch= s[0];
    string ans=dupli(s.substr(1));
    if(ch==ans[0]){
        return ch+"";
    }
    else{
        return ch+ans;
    }
}
int main(){
    cout<<dupli("aabbbsscccdd");
    return 0;
}