#include <iostream>
using namespace std;
void swap(int arr[], int i, int j)
{
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
}
int partition(int arr[], int s, int e)
{
    int pivot = arr[s];
    int i = s + 1;
    int j=e;

    do
    {
        while (arr[i] <= pivot)
        {
            i++;
        }
        
        while (arr[j] > pivot)
        {
            j--;
        }
        // if(arr[i]>arr[j]){
        //     swap(arr,i,j);
        // }
    }
    while(i<j);
    
        swap(arr,s,j);
        return j;
    
    
    
}
void quicksort(int arr[], int s, int e)
{
    if (s < e)
    {
        int pi = partition(arr, s, e);
        quicksort(arr, s, pi - 1);
        quicksort(arr, pi + 1, e);
    }
}
int main()
{
    int arr[] = {5, 4, 3, 2, 1};
    quicksort(arr, 0, 4);
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}