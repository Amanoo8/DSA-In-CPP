#include <iostream>
using namespace std;

int main()
{
   int a[]={0,1,2,2,4,5,5,5,5,6,7};
   int n;
   cin>>n;
   int m = sizeof(a) / sizeof(a[0]);
   int i=0,j=m-1; 
   bool flag =true;
   while(i<=j){
    int k=i+((-i+j)/2);
    if(a[0]==n){
        cout<<"Element first occurence at index:0 "<<endl;
        break;
    }
    else if(a[k]==n&&a[k-1]<n){
        cout<<"Element first occurence at index: "<<k<<endl;
        flag=false;
        break;
      }
      else if(a[k]>=n) j=k-1;
      else i=k+1;
    }
    if(flag) cout<<"Element not found in Array"<<endl;
}