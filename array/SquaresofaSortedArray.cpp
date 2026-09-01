#include <iostream>
using namespace std;
int main()
{
    int arr[] = {-5, -4, -3, -2, -1}, n = sizeof(arr) / sizeof(arr[0]), i = 0, k = n - 1, j = n - 1, newarr[n];
    for (int i = 0; i < n; i++)
    {
        arr[i] *= arr[i];
    }
    while (i <= j)
    {
        newarr[k] = max(arr[i], arr[j]);
        if (arr[j] > arr[i])
            j--;
        else
            i++;
            k--;
    }

    for (int i = 0; i < n; i++)
    {
        cout << newarr[i] << " ";
    }
}