#include <iostream>
using namespace std;
int sumOfArr(int arr[],int n){
    if(n<0)return 0;
    return arr[n]+sumOfArr(arr, n-1);   
}
int main()
{
int arr[] = {2, 5, 2, 8, 2, 3, 5};
  int n=(sizeof(arr)/sizeof(arr[0]))-1;
 cout<<sumOfArr(arr,n);
}
