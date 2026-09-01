#include <iostream>
using namespace std;
int main()
{
    int arr[] = {2, 2, 1, 1, 3};
    int n = sizeof(arr) / sizeof(arr[0]), count = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (arr[i] == arr[j])
                count++;
        }
        if (count > n / 2)
        {
            cout << "true";
            return 0;
        }
        else
        {
            count = 0;
        }
    }
    cout << "false";
}