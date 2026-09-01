#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int n;
    int count = 0;
    cin >> n;
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            count++;
            break;
        }
    }
    if (count >= 1)
    {
        cout << "Composite number" << endl;
    }
    else if (n == 1)
    {
        cout << " neither Composite nor Prime" << endl;
    }
    else
    {
        cout << "Prime Number" << endl;
    }
}
