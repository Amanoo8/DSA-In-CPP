#include <iostream>
#include<climits>
using namespace std;
int main()
{
    int arr[3][4] = {{1, 2, 2, 3}, {2, 3, 4, 5}, {4, 7, 9, 12}}, n = sizeof(arr) / sizeof(arr[0]),m = sizeof(arr[0]) / sizeof(arr[0][0]),MAX=INT_MIN;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            MAX= max(MAX,arr[i][j]);
        }
    }
    cout<<MAX;
}