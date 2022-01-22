#include <iostream>
#include <deque>
using namespace std;
int main(){
    int n, k;
    int arr[n];
    cin>>n>>k;
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    deque<int>q;
    vector<int>ans;

    for(int i=0; i<k; i++){
        while(!q.empty() && arr[q.back()]<arr[i]){
            q.pop_back();
        }
        q.push_back(i);
    }
    ans.push_back(nums[q.front()]);
    for(int i=k; i<n; i++){
        if(q.front() == i-k){
            q.pop_front();
        }
        while(!q.empty() && arr[q.back()]<arr[i]){
            q.pop_back();
        }
        q.push_back(i);
        ans.push_back(a[(q.front())]);
    }

    
    return 0;
}