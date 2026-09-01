#include <iostream>
#include <climits>
using namespace std;

int main()
{
   int a[]={1,0,0,2,3,4,5,6,7};
      int m = sizeof(a) / sizeof(a[0]);
       for(int j=0;j<m-1;j++){
        for (int i = 0; i < m-1; i++)
    {
      if(a[i]==0&&a[i+1]!=0){
         swap(a[i],a[i+1]);
      } 
    }
       }
    for(int i=0;i<m;i++){
        cout<<a[i]<<"  ";
    }
}