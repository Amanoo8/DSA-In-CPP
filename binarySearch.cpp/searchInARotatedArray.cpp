#include <iostream>
using namespace std;

int main()
{
    int a[] = {4, 5, 6, 7, 0, 1, 2, 3};
    int n;
    cin >> n;
    int m = sizeof(a) / sizeof(a[0]);
    int i = 0, j = m - 1;
    while (i <= j)
    {
        int k = i + ((j - i) / 2);
        if (a[k] == n)
        {
            cout << "element found at index :" << k;
            break;
        }
        if (a[i] <= a[k])
        {
            if (n >= a[i] && n <= a[k])
            {
                j = k - 1;
            }
            else
            {
                i = k + 1;
            }
        }
        else
        {
            if (n >= a[k] && n <= a[j])
            {
                i = k + 1;
            }
            else
            {
                j = k - 1;
            }
        }
    }
}