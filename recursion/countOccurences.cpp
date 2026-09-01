#include <iostream>
using namespace std;
int countInArr(int arr[],int n,int x){
    if(n<0)return 0;
    else if(arr[n]==x)return 1+countInArr( arr, n-1, x);
    else return countInArr( arr, n-1, x);
}
int main()
{
int arr[] = {2, 5, 2, 8, 2, 3, 5};
  int n=(sizeof(arr)/sizeof(arr[0]))-1,x;
  cin>>x;
 cout<<countInArr(arr,n,x);
}
