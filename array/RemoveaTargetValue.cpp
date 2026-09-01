#include <iostream>
using namespace std;
int main()
{
    int arr[] = {3, 2, 2, 3, 4, 3, 5}, n = sizeof(arr) / sizeof(arr[0]), j = 0, target = 3;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] != target)
        {
            arr[j] = arr[i];
            j++;
        }
    }

    for (int i = 0; i < j; i++)
    {
        cout << arr[i] << " ";
    }
}