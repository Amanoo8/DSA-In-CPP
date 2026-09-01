#include<iostream>
#include<vector>
using namespace std;
int main(){

    int arr[]={0,1,1,1,0,1,1,1,1,0,1,1,1,1,0,1,0,1};
    vector<int> vec(0);
    int n= sizeof(arr)/4,count=0;
    int i=0;
    while(i<n){
    if(arr[i]==1){
        count++;
    }
    if(arr[i]==0) vec.push_back(count);
    if(arr[i]==0&&arr[i+1]==1){
        count=0;
    }
    i++;
    }
    int res=0,v =vec.size();
    for(int i=0;i<v;i++){
     if(vec[i]>res) res=vec[i];
    }
    cout<<res;
}