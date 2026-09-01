#include<iostream>
using namespace std;
int main(){
    int a[]={12,2,1,12,654,-6543,43} , n= sizeof(a)/4,num;
    cin>>num;
    for(int i=0;i<n;i++){
       if(a[i]==num){
       cout<<"present"<<endl;
       return 0;
       }
    }
    cout<<"not present"<<endl;
}