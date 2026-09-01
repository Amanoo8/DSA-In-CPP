#include <iostream>
using namespace std;
int main(){
    int v=0;
    string n;
    cin>>n;
    char k;
    cin>>k;
    for(int i=0;i<n.length();i++){
    if(n[i]==k)v++;
    }
    cout<<v;
}
  