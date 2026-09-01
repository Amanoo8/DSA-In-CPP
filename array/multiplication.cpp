#include<iostream>
using namespace std;
int main(){
    int a[]={12,2,1} , n= sizeof(a)/4,x=1;
    for(int i=0;i<n;i++){
        x*=a[i];
    }
    cout<<x<<endl;
}