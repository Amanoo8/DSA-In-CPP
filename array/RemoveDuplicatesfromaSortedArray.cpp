#include <iostream>
using namespace std;
int main()
{
    int arr[] = {1,1,2,2,2,3,4,4};
    cout<<arr[0]<<" ";
    int n = sizeof(arr) / sizeof(arr[0]),flag=true;
     for(int i=1;i<n;i++){
        for(int j=i-1;j>=0;j--){
            if(arr[i]==arr[j]){
                flag=false;
                break;
            }
        }
        if(flag) cout<<arr[i]<<" ";
        else flag=true;
     }
}