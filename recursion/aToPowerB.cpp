#include <iostream>
using namespace std;
double power(double a, int b)
{
  if (b < 0)
  {
    b = -b;
    a = 1 / a;
  }
  if (b > 0)
  {
    double half = power(a, b/2);
    if (b % 2 == 0)
      return half * half;
    else
      return half * half * a;
  }
  else
    return 1;
}
int main()
{
  double a;
  int b;
  cin >> a >> b;
  cout << power(a, b);
}
