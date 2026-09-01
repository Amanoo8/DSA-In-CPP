#include <iostream>
using namespace std;
int main()
{
    string str="aman";
    for(int i=0;i<str.length();i++){
        for(int j=1;j<str.length()-i+1;j++){
            cout<<str.substr(i,j)<<" ";
        }
        cout<<endl;
    }
}