#include <iostream>
using namespace std;
int main()
{
  int arr[] = {1, 2, 3, 2, 5, 6, 7, 1};
  int n = sizeof(arr) / sizeof(arr[0]), res = 1, count = 1;
  for (int i = 0; i < n - 1; i++)
  {
    if (arr[i] < arr[i + 1])
    {
      count++;
      res = max(res, count);
    }
    else
    {
      count = 1;
    }
  }
  cout << res;
}