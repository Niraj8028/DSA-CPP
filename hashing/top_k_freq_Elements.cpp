#include <iostream>
#include <queue>
#include <unordered_map>
using namespace std;

int main()
{

    unordered_map<int, int> mp;
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> MIN;
    vector<int> v = {1, 1, 1, 3, 2, 2, 4, 4, 4};
    int i, n = v.size();
    for (i = 0; i < n; i++)
    {
        mp[v[i]]++;
    }
    for (auto i = mp.begin(); i != mp.end(); i++)
    {
        MIN.push({i->second, i->first});
        if (MIN.size() > 2)
            MIN.pop();
    }
    while (MIN.size() > 0)
    {
        cout << MIN.top().second;
        MIN.pop();
    }

    return 0;
}