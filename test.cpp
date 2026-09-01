#include <iostream>
#include <climits>
using namespace std;
bool sort(int a[],int m){
    for (int i = 0; i < m-1; i++)
    {
      if(a[i]<a[i+1])return true;
    }
    return false;
}
int main()
{
   int a[]={1,2,3,4,5,6,7};
      int m = sizeof(a) / sizeof(a[0]);
      cout<<sort(a,m);
}