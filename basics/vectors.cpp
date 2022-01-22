#include <iostream>
#include <vector>

using namespace std;
int main(){
    vector<int>v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);

    for(int i=0; i<v.size(); i++){
        cout<<v[i];
        cout<<endl;
    }
    for(auto elements :v){
        cout<<elements;
    }
    v.pop_back();
    for(int i=0; i<v.size(); i++){
        cout<<v[i];
        cout<<endl;
    }
    vector<int>v2 (3,50);for(int i=0; i<v2.size(); i++){
        cout<<v2[i];
        cout<<endl;
    }
    swap(v,v2);for(int i=0; i<v.size(); i++){
        cout<<v[i]<<" ";
        cout<<v2[i]<<" ";
        cout<<endl;
    }
    
    return 0;
}