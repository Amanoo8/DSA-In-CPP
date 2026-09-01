#include <iostream>
#include <climits>
using namespace std;
int main()
{
   int a[]={1,2,5,9,3,4,6,7};
      int m = sizeof(a) / sizeof(a[0]);
      for(int i=m-1;i>=0;i--){
        int maxi=a[i],mi=i;
        for(int j=i;j>=0;j--){
         if(a[j]>maxi){
         maxi=a[j];
         mi=j;
         }
        }
        swap(a[mi],a[i]);
      }
      for(int i=0;i<m;i++){
        cout<<a[i]<<" ";
      }
 }