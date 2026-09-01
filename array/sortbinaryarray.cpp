#include <iostream>
using namespace std;
int main()
{
    int arr[] = {1,0,1,0,0,1,1,0,0}, n = sizeof(arr) / sizeof(arr[0]), j = 0;
    for (int i = 0; i < n; i++)
    {
        if(arr[i]==0){
            swap(arr[i],arr[j]);
            j++;
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}