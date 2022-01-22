#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    vector<int>a={2000,500,200,100,50,20,10,5,2,1};
    int x;
    cin>>x;
    int ans=0;
    sort(a.begin(),a.end(),greater<int>());
    // for(int i=0; i<a.size(); i++){
    //     ans=ans+x/a[i];
    //     x=x-((x/a[i])*a[i]);
    // }
    // cout<<ans;
    int count=0;
    int i=0;
    while(x>0){
        if(x>=a[i]){
        x=x-a[i];
        count++;
        }
        else{
            i++;
        }
    }
    cout<<count;


    return 0;
}