#include <iostream>
using namespace std;
int res=0;
int reverse(int n){
if(n==0)return 0;
res =res*10+n%10;
reverse(n/10);
return res;
}
int main()
{
  int n;
  cin>>n;
 cout<<reverse(n);
}
