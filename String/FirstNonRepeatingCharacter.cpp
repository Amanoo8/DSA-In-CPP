#include <iostream>
using namespace std;
int main()
{
    string n;
    cin >> n;
    char k;
    for (int i = 0; i < n.length(); i++)
    {
        int v = 0;
        for (int j = 0; j < n.length(); j++)
        {
            if (n[i] == n[j])
                v++;
        }
        if (v == 1)
        {
            k = n[i];
            break;
        }
    }
    cout << k;
}
