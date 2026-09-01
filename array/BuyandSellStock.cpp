#include <iostream>
#include <climits>
using namespace std;
int main()
{
    int arr[] = {7,6,5,10};
    int n = sizeof(arr) / sizeof(arr[0]),profit=INT_MIN;
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            profit=max(arr[j]-arr[i],profit);
        }
    }
    cout<<profit;
}