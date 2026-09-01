#include <iostream>
using namespace std;
int main()
{
    int v=1;
    string n;
    getline(cin,n);
    for (int i = 0; i < n.length(); i++)
    {
      if(n[i]==' ')v++;
    }
    cout<<v;
}
