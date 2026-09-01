#include <iostream>
#include <climits>
using namespace std;
int main()
{
    int arr[] = {2, 3, 10, 6, 4, 8, 1};
    int n = sizeof(arr) / sizeof(arr[0]), res = INT_MIN, c = 0;
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (j > i)
            {
                c = arr[j] - arr[i];
                if (c > res)
                    res = c;
            }
        }
    }
    cout << res;
}