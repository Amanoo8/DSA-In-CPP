#include<iostream>
using namespace std;
int main(){
    int arr[]={1,2,3,4,5,6,7,8,7};
        int n = sizeof(arr) / sizeof(arr[0]), count = 0;
    for(int i=0;i<n-1;i++){
        if(arr[i]>arr[i+1]){
            cout<<"false";
            return 0;
        }
    }
    cout<<"ture";
}