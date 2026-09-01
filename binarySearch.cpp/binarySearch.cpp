#include <iostream>
using namespace std;

int main()
{
   int a[]={0,1,2,4,5,6,7};
   int n;
   cin>>n;
   int m = sizeof(a) / sizeof(a[0]);
   int i=0,j=m-1; 
   bool flag =true;
   while(i<=j){
    int k=(i+j)/2;
      if(a[k]==n){
        cout<<"Element found at index: "<<k<<endl;
        flag=false;
        break;
      }
      else if(a[k]>n) j=k-1;
      else i=k+1;
    }
    if(flag) cout<<"Element not found in Array"<<endl;
}