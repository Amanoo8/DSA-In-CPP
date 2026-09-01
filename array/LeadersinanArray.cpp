#include <iostream>
using namespace std;
int main()
{
    int arr[] = {16, 17, 4, 3, 5, 2};
    int n = sizeof(arr) / sizeof(arr[0]);
    bool flag = true;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] <= arr[j])
                flag = false;
        }
        if (flag)
        {
            cout << arr[i] << " ";
        }
        else
        {
            flag = true;
        }
    }
}