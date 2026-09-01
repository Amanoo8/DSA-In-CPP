#include <iostream>
#include <climits>
using namespace std;
int main()
{
   int a[]={1,2,5,9,3,4,6,7};
      int m = sizeof(a) / sizeof(a[0]);
      for(int i=0;i<m;i++){
        int mini=a[i],mi=i;
        for(int j=i;j<m;j++){
         if(a[j]<mini){
         mini=a[j];
         mi=j;
         }
        }
        swap(a[mi],a[i]);
      }
      for(int i=0;i<m;i++){
        cout<<a[i]<<" ";
      }
 }