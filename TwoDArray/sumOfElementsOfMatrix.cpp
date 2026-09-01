#include <iostream>
using namespace std;
int main()
{
    int arr[3][4] = {{1, 2, 2, 3}, {2, 3, 4, 5}, {4, 7, 9, 12}}, n = sizeof(arr) / sizeof(arr[0]),m = sizeof(arr[0]) / sizeof(arr[0][0]),sum=0;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            sum+=arr[i][j];
        }
    }
    cout<<sum;
}