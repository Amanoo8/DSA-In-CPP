#include <iostream>
using namespace std;
int res=0;
int firstOccurence(int arr[],int n,int x){
    if(n<0)return res;
    if(arr[n]==x) res=n ;
    firstOccurence(arr,n-1,x);
}
int main()
{
int arr[] = {1, 2, 4, 7, 9};
  int n=(sizeof(arr)/sizeof(arr[0]))-1,x;
  cin>>x;
 if(firstOccurence(arr,n,x)==0 && arr[0]!=x )cout<<"Not Found" ;
 else cout<<firstOccurence(arr,n,x);

}
