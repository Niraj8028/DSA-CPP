#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main(){
    // string str;
    // cin>>str;
    // cout<<str;
    // string str1(5,'n');
    // cout<<str1<<endl;
    // string str2="niraj";
    // cout<<str2;
    // string str3;
    // getline(cin ,str3);
    // cout<<str3;
    string s1="fami";
    string s2="FhwkJdhandla";
    //cout<<s2.compare(s1);
    if(!s1.empty()){
        cout<<"empty"<<endl;
    }
    s2.erase(7,3);
    cout<<s2<<endl;
    s2.insert(2,"lol");
    cout<<s2<<endl;
    cout<<s1.size()<<endl;
    cout<<s2.substr(4,4)<<endl;
    string str="8786";
    int x=stoi(str);
    cout<<x+2<<endl;
    cout<<to_string(x)+'2'<<endl;
    sort(s2.begin() ,s2.end());
    cout<<s2<<endl;

    for(int i=0; i<s2.size(); i++){
        if(s2[i]>='a' && s2[i]<='z'){
            s2[i]-=32;

        }

    }
    cout<<s2<<endl;
    transform(s2.begin(),s2.end(),s2.begin(),::tolower);
    cout<<s2;

    
    return 0;
}