#include <iostream>
#include <climits>
using namespace std;
int right(int arr[], int n, int s)
{
    int r = INT_MIN;
    for (int i = s + 1; i < n; i++)
    {
        r = max(r, arr[i]);
    }
    return r;
}
int left(int arr[], int n, int s)
{
    int r = INT_MIN;
    for (int i = s - 1; i >= 0; i--)
    {
        r = max(r, arr[i]);
    }
    return r;
}
int main()
{
    int arr[] = {4, 1, 3, 1, 4};
    int n = sizeof(arr) / sizeof(arr[0]), water = 0;
    for (int i = 1; i < n - 1; i++)
    {
        if (arr[i] < left(arr, n, i) && arr[i] < right(arr, n, i))
            water += min(left(arr, n, i), right(arr, n, i)) - arr[i];
    }
    cout << water;
}