#include <iostream>
using namespace std;
int main(){
    int v=0;
    string n;
    cin>>n;
    for(int i=0;i<n.length();i++){
        if(n[i]=='a'||n[i]=='i'||n[i]=='e'||n[i]=='o'||n[i]=='u'||n[i]=='A'||n[i]=='I'||n[i]=='E'||n[i]=='O'||n[i]=='U')v++;
    }
    cout<<n.length()-v;
}
  