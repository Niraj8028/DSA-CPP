#include <iostream>
#include <climits>
using namespace std;

bool isminimum(int arr[], int n, int m, int min)
{
    int students = 1;
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > min)
        {
            return false;
        }
        if (sum + arr[i] > min)
        {
            students++;
            sum = arr[i];

            if (students > m)
            {
                return false;
            }
        }
        else
        {
            sum = sum + arr[i];
        }
    }
    return true;
}

int minpages(int arr[], int n, int m)
{
    int start = arr[n-1];

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

        if (isminimum(arr, n, m, mid))
        {
            ans = min(ans, mid);
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
    }
    return ans;
}
int main()
{
    int arr[] = {10,20,30,40};
    int n = 4;
    int m = 2;
    cout << minpages(arr, n, m);

    return 0;
}