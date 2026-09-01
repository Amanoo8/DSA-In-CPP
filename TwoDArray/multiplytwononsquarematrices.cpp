#include <iostream>
using namespace std;
int main()
{
    int arr1[3][2] = {{1, 2},
                      {2, 3},
                      {1, 4}},

        arr2[2][4] = {{1, 2, 3, 4},
                      {5, 6, 7, 8}},

        m = sizeof(arr1) / sizeof(arr1[0]),
        n = sizeof(arr1[0]) / sizeof(arr1[0][0]),
        p = sizeof(arr2) / sizeof(arr2[0]),
        q = sizeof(arr2[0]) / sizeof(arr2[0][0]),
        res[m][q];
    // Multiply
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < q; j++)
        {  
            res[i][j]= 0;
            for (int k = 0; k < n; k++)
            {
                res[i][j] += arr1[i][k]*arr2[k][j];
            }
        }
    }
    // Print Result
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < q; j++)
        {
            cout << res[i][j] << " ";
        }
        cout << endl;
    }
}