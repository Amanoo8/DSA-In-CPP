#include <iostream>
using namespace std;
int main(){
    int v=0;
    string n;
    cin>>n;
    int i=0,j=n.length()-1;
    bool flag=true;
    while(i<j){
        if(n[i++]!=n[j--])flag=false;
    }
    if(flag)cout<<"YES";
    else cout<<"NO";
}
  