#include <iostream>
using namespace std;
int main()
{
    string n;
    getline(cin,n);
    int maxi =0,k=0,m=n.length();
    for (int i = 0; i < n.length(); i++)
    {
        if(n[i]==' '){
            maxi=max(maxi,i-k+1);
            k=i+1;
        }
    }
    maxi= max(maxi,m-k);
    cout<<maxi;
}
