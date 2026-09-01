#include <iostream>
using namespace std;
bool isSorted(int arr[],int n){
    if(n<1)return true;
    if(arr[n]<arr[n-1]) return false;
    return isSorted(arr,n-1);
}
int main()
{
int arr[] = {1, 2, 4, 7, 9};
  int n=(sizeof(arr)/sizeof(arr[0]))-1;
 if(isSorted(arr,n))cout<<"Yes Sorted";
 else cout<<"Not Sorted";
}
