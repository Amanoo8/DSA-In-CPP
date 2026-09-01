#include <iostream>
using namespace std;
int main()
{
    int arr[] = {1, 8, 6, 2, 5, 4, 8, 3, 9}, n = sizeof(arr) / sizeof(arr[0]), i = 0, j = n - 1, res = 0;

    while (i < j)
    {
        res = max(res, min(arr[i], arr[j]) * abs(i - j));
        if (arr[i] < arr[j])
            i++;
        else
            j--;
    }
    cout << res;
}