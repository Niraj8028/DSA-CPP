#include <iostream>
using namespace std;
void reverse(string s){
    if(s.length()==0){
        return;
    }
    string ros=s.substr(1);
    reverse(ros);
    cout<<s[0]<<endl;
}
void replacepi(string s){
    if(s.length()==0){
        return;
    }
    if(s[0]=='p' && s[1]=='i'){
        cout<<"3.14";
        replacepi(s.substr(2));
    }
    else{
        cout<<s[0];
        replacepi(s.substr(1));
    }
}
string move_all_X(string s){
    if(s.length()==0){
        return "";
    }
    char ch=s[0];
    string ans=move_all_X(s.substr(1));
    if(ch=='x'){
        return ans+'x';
    }
    else{
        return ch+ans;
    }
}
string substring(string s, string ans){
    if(s.length()==0){
        cout<<ans<<endl;
        return "";
    }
    char ch=s[0];
    string ros=s.substr(1);
    substring(ros,ans);
    substring(ros,ans+ch);
}
string ASCII(string s, string ans){
    if(s.length()==0){
        cout<<ans<<endl;
        return "";
    }
    char ch=s[0];
    int code=ch;
    string ros=s.substr(1);
    ASCII(ros,ans);
    ASCII(ros,ans+ch);
    ASCII(ros,ans+ to_string(code));

}

int main(){
    //reverse("binod");
    //replacepi("pidsdsdppi");
    //cout<<move_all_X("xasfxaddfxx");
    //string a="abc";
    //substring("abc","");
    ASCII("AB","");
    
    return 0;
}