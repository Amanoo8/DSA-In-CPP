#include <iostream>
using namespace std;
int main()
{
    int arr[3][3] = {{1, 2, 4},
                     {2, 3, 7},
                     {1, 4, 2}},
        n = sizeof(arr) / sizeof(arr[0]), m = sizeof(arr[0]) / sizeof(arr[0][0]);
    // Reverse
    for (int k = 0; k < n; k++)
    {
        int i = 0, j = n - 1;
        while (i < j)
        {
            swap(arr[k][i], arr[k][j]);
            i++;
            j--;
        }
    }
    // Transpose
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            swap(arr[i][j], arr[j][i]);
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}