#include <iostream>
#include <algorithm>
using namespace std;

void insertion(int arr[], int n, int val)
{
    n = n + 1;
    arr[n] = val;
    int i = n;
    while (i > 1)
    {
        int parent = i / 2;
        if (arr[parent] < arr[i])
        {
            swap(arr[parent], arr[i]);
            i = parent;
        }
        else
        {
            return;
        }
    }
}
void deletion(int arr[], int n)
{
    arr[0] = arr[n];
    n = n - 1;
    int i = 0;
    while (i < n)
    {

        int left = (2*i+1);
        int right = (2*i + 2);
        int largest = max(arr[left], arr[right]);

        if (arr[i] < arr[largest])
        {
            swap(arr[i], arr[largest]);
            i = largest;
        }
        else
        {
            return;
        }
    }
}
int main()
{
    int arr[] = {40, 30, 10, 20, 15};
    int n = 5;
    insertion(arr, n, 35);
    for (int i = 0; i <= n; i++)
    {
        cout << arr[i] << " ";

    }
    cout<<endl;
    deletion(arr, 6);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}