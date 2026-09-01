#include <iostream>
#include <climits>
#include <vector>
using namespace std;
int main()
{
    int arr[] = {10, 20, 15, 30, 280};
    int n = sizeof(arr) / sizeof(arr[0]), res = INT_MAX, c = 0;
    for (int i = 0; i < n - 1; i++)
    {
        c = abs(arr[i] - arr[i + 1]);
        if (c < res)
            res = c;
    }
    cout << res;
}