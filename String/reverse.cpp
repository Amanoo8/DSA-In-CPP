#include <iostream>
using namespace std;
int main(){
    int v=0;
    string n;
    cin>>n;
    int i=0,j=n.length()-1;
    while(i<j){
        swap(n[i++],n[j--]);
    }
    cout<<n;
}
  