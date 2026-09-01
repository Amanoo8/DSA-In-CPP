#include <iostream>
using namespace std;
int maxInArr(int arr[],int n){
    if(n<0)return arr[0];
  return max(arr[n],maxInArr(arr,n-1));
}
int main()
{
  int arr[]={1,2,5,3,4};
  int n=(sizeof(arr)/sizeof(arr[0]))-1;
 cout<<maxInArr(arr,n);
}
