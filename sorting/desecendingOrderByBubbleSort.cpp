#include <iostream>
using namespace std;

int main()
{
    int a[] = {1, 0, 0, 2, 3, 4, 5, 6, 7};
    int m = sizeof(a) / sizeof(a[0]);
    for (int j = 0; j < m - 1; j++)
    {
        int swap1 = 0;
        for (int i = 0; i < m - j - 1; i++)
        {
            if (a[i] < a[i + 1])
            {
                swap(a[i], a[i + 1]);
                swap1++;
            }
        }
        if (swap1 == 0)
            break;
    }
    for (int i = 0; i < m; i++)
    {
        cout << a[i] << "  ";
    }
}