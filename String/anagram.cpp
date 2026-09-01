#include <iostream>
using namespace std;
int frequency(string n,char k){
    int v=0;
    for(int i=0;i<n.length();i++){
    if(n[i]==k)v++;
    }
    return v;
}
int main()
{
    string n,m;
    cin >> n;
    cin>>m;
    bool flag =true;
   if(n.length()!=m.length())flag=false;
   else{
    for(int i=0;i<n.length();i++){
           if(frequency(n,n[i])!=frequency(m,n[i])) {
            flag =false;
            break;
           }
    }
   }
   if(flag)cout<<"YES";
   else cout<<"NO";
}
