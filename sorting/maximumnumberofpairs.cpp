#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
   int a[]={2,4,5,8,10,12};
    int m = sizeof(a) / sizeof(a[0]),x,pairs=0;
    sort(begin(a),end(a));
    cin>>x;
    int i=0,j=1;
    while(j<m){
     if(a[j++]-a[i++]>=x)pairs++;
     else j++;
    }
    cout<<pairs;
}