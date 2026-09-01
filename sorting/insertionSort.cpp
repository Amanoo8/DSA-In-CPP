#include <iostream>
#include <climits>
using namespace std;
int main()
{
   int a[]={1,2,5,9,3,4,6,0,7};
      int m = sizeof(a) / sizeof(a[0]);
      for(int i=1;i<m;i++){
       int j=i;
       while(j>0&&a[j]<a[j-1]){
        swap(a[j],a[j-1]);
        j--;
       }
    }
      for(int i=0;i<m;i++){
        cout<<a[i]<<" ";
      }
 }