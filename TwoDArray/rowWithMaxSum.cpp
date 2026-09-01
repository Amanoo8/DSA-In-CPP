#include <iostream>
#include <climits>
using namespace std;
int main()
{
    int arr[3][4] = {{1, 2, 2, 3}, {2, 3, 40, 5}, {4, 7, 9, 12}}, n = sizeof(arr) / sizeof(arr[0]), m = sizeof(arr[0]) / sizeof(arr[0][0]), MAXSUM = INT_MIN, MAXROW = 0;

    for (int i = 0; i < n; i++)
    {
        int sum = 0;
        for (int j = 0; j < m; j++)
        {
            sum += arr[i][j];
        }
        if (sum > MAXSUM)
        {
            MAXSUM = sum;
            MAXROW = i;
        }
    }
    cout << MAXSUM << " " << MAXROW;
}