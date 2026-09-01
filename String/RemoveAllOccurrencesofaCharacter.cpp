#include <iostream>
using namespace std;
int main()
{
    string n;
    getline(cin,n);
    string res ="";
    char k;
    cin >>k;
    for (int i = 0; i < n.length(); i++)
    {
       if(n[i]!=k)res.push_back(n[i]);
    }
    cout<<res;
}
