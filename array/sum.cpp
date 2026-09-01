#include<iostream>
using namespace std;
int main(){
    int a[]={12,2,1,12,654,6543,43} , n= sizeof(a)/4,x=0;
    for(int i=0;i<n;i++){
        x+=a[i];
    }
    cout<<x<<endl;
}