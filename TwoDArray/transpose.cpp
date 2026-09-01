#include <iostream>
using namespace std;
int main()
{
    int arr[2][3] = {{1, 2, 4}, {2, 3, 7}}, n = sizeof(arr) / sizeof(arr[0]), m = sizeof(arr[0]) / sizeof(arr[0][0]);
    int res[m][n];
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            res[i][j] = arr[j][i];
        }
    }
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << res[i][j] << " ";
        }
        cout << endl;
    }
}