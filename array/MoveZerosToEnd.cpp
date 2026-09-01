#include <iostream>
#include <utility>
using namespace std;
int main()
{
    int arr[] = {0, 1, 0, 3, 12};
    int n = sizeof(arr) / sizeof(arr[0]);
    for (int i = 0; i < n; i++){
        for(int j=0;j<n-1;j++){
            if(arr[j]==0&&arr[j+1]!=0) std::swap(arr[j],arr[j+1]);
        }
    }
    for (int i = 0; i < n; i++){
        cout<<arr[i]<<" ";
    }
}