#include "bits/stdc++.h"
using namespace std;
int main()
{
    int n, target;
    cin >> n >> target;
    vector<int>arr;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    sort(arr.begin(), arr.end());
    for (int i = 0; i < n; i++)
    {
        bool ans=false;
        int low = i + 1;
        int hi = n - 1;
        while (low < hi)
        {
            int current = arr[i] + arr[low] + arr[hi];
            if (current == target)
            {
                ans = true;
                cout << arr[i] << arr[low] << arr[hi];
            }
            else if (current < target)
            {
                low++;
            }
            else
            {
                hi--;
            }
        }
        if (ans)
        {
            cout << "Triplet found";
        }
        else
        {
            cout << "Not found";
        }
    }
}