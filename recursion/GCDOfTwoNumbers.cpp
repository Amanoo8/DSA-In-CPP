#include <iostream>
using namespace std;
int gcd(int n,int m){
    if(n==0)return m;
return gcd(m%n,n);
}
int main()
{
  int n,m;
  cin>>n>>m;
  cout<<gcd(n,m);
}
