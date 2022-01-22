#include <iostream>
#include <climits>
using namespace std;

int isfeasible(int arr[], int n, int min)
{
    int painters = 1;
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum = sum + arr[i];
        if (sum > min)
        {
            painters++; 
            sum = arr[i];
        }
    }
    return painters;
}

int minpages(int arr[], int n, int m)
{
    int start = arr[n - 1];

    if (m > n)
    {
        return -1;
    }
    int sum = 0;

    for (int i = 0; i < n; i++)
    {
        sum = sum + arr[i];
    }
    int end = sum;
    int ans = INT_MAX;

    while (start < end)
    {
        int mid = (start + end) / 2;
        int painters = isfeasible(arr, n, mid);
        if (painters <= m)
        {
            end = mid;
        }
        else
        {
            start = mid + 1;
        }
    }
    return start;
}
int main()
{
    int arr[] = {10, 20, 30, 40};
    int n = 4;
    int m = 2;
    cout << minpages(arr, n, m);

    return 0;
}