#include <iostream>
#include <set>
using namespace std;
int main(){
    set<int>s;
    s.insert(1);
    s.insert(2);
    s.insert(2);
    s.insert(3);
    for(auto i:s){
        cout<<i<<" ";
    }
    cout<<" "<<endl;
    for(auto i=s.rbegin(); i!=s.rend(); i++ ){
        cout<<*i;
        cout<<" ";;
    }
    cout<<" "<<endl;
    cout<<s.size();
    cout<<" "<<endl;
    set<int ,greater<int>>n;
    n.insert(1);
    n.insert(2);
    n.insert(4);
    n.insert(3);
    for(auto i :n){
        cout<<i<<" ";
    }
    cout<<" "<<endl;

    multiset<int>m;
    m.insert(4);
    m.insert(2);
    m.insert(3);
    m.insert(1);
    m.insert(1);
    m.insert(1);
    for(auto i:m)
        cout<<i<<" ";
    cout<<" "<<endl;
    //m.erase(1);
    for(auto i:m)
        cout<<i<<" ";
    cout<<" "<<endl;
    m.erase(m.find(1));
    for(auto i:m)
        cout<<i<<" ";
    cout<<" "<<endl;

    return 0;
}