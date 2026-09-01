#include <iostream>
using namespace std;
int main()
{
    int arr[] = {1, 1, 1, 0, 0, 2, 2}, n = sizeof(arr) / sizeof(arr[0]), low = 0, mid = 0, high = n - 1;
    while (mid <= high)
    {
        if (arr[mid] == 0)
        {
            swap(arr[mid], arr[low]);
            low++;
            mid++;
        }
        else if (arr[mid] == 2)
        {
            swap(arr[mid], arr[high]);
            high--;
        }
        else
        {
            mid++;
        }
    }

    for (int l = 0; l < n; l++)
    {
        cout << arr[l] << " ";
    }
}