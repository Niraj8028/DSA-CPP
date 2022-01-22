#include <iostream>
#include <string>
using namespace std;
int main(){
    string str="dalnhwjuicnw";
    int freq[26];
    for(int i=0; i<26; i++){
        freq[i]=0;
    }
    for(int i=0; i<str.size(); i++){
        freq[str[i]-'a']++;
    }
    int max=0;
    char ans='a';
    for(int i=0; i<26; i++){
        if(freq[i]>max){
            max=freq[i];
            ans=i+'a';
        }

    }
    cout<<max<<endl;
    cout<<ans<<endl;
    

    
    return 0;
}