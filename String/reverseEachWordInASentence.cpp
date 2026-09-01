#include <iostream>
using namespace std;
int main()
{
    string n;
    getline(cin, n);
    int i = 0, j = n.length() - 1;
    for (int k = 0; k < n.length(); k++)
    {
        if (n[k] == ' ')
        {
            j = k - 1;
            while (i < j)
            {
                swap(n[i++], n[j--]);
            }
            i = k + 1;
        }
    }
    j = n.length() - 1;

    while (i < j)
    {
        swap(n[i++], n[j--]);
    }
    cout << n;
}
