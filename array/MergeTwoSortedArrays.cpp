#include <iostream>
using namespace std;
int main()
{
    int arr1[] = {1}, arr2[] = {2, 3, 4, 5}, n = sizeof(arr1) / sizeof(arr1[0]), m = sizeof(arr2) / sizeof(arr2[0]), newarr[n + m], i = 0, j = 0, k = 0;
    while (k < n + m)
    {
        if (i < n && j < m)
        {
            newarr[k] = min(arr1[i], arr2[j]);
            if (arr1[i] > arr2[j])
                j++;
            else
            {
                i++;
            }
            k++;
        }
        else if (i >= n && j < m)
        {
            newarr[k] = arr2[j];
            j++;
            k++;
        }
        else if (i < n && j >= m)
        {
            newarr[k] = arr1[i];
            i++;
            k++;
        }
    }
    for (int l = 0; l < n + m; l++)
    {
        cout << newarr[l] << " ";
    }
}