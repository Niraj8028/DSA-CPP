#include <iostream>
#include <queue>
using namespace std;
int main(){
    priority_queue<int,vector<int>>pq;
    
    pq.push(1);
    pq.push(3);
    pq.push(2);
    pq.pop();
    cout<<pq.top()<<endl;
    priority_queue<int, vector<int>,greater<int> >pii;
    pii.push(3);
    pii.push(1);
    pii.push(2);
    cout<<
    
    return 0;
}