#include <iostream>
using namespace std;
int main()
{
    string n;
    getline(cin,n);
    string res ="";
    for (int i = 0; i < n.length(); i++)
    {
        bool flag =true;
        for (int j = 0; j < i; j++)
        {
            if (n[i] == n[j]) {
                flag=false;
             break;}
        }
        if(flag)res.push_back(n[i]);
    }
    cout<<res;
}
