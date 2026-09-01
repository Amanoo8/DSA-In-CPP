# include<iostream>
using namespace std;
int main(){
    int n,c=0,s=0;
    cin>>n;
   while(n!=0){
      c++;
      s+=n%10;
      n=n/10;
   }
   cout<<c<<endl;
   cout<<s<<endl;
}
