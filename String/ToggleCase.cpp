#include <iostream>
using namespace std;
int main()
{
    string n;
    getline(cin,n);
    for (int i = 0; i < n.length(); i++)
    {
        if(n[i]>=65&&n[i]<=90)n[i]+=32;
        else if(n[i]>=97&&n[i]<=122)n[i]-=32;
    }
    cout<<n;
}
