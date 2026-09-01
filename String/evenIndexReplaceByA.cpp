#include <iostream>
using namespace std;
int main(){
    int v=0;
    string n;
    getline(cin,n);
    string res;
    for(int i=0;i<n.size();i++){
     if(i%2==0)res.push_back(65);
     else res.push_back(n[i]);
    }
    cout<<res;
}
  