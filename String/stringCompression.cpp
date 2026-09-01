#include <iostream>
using namespace std;
int main()
{
    string str="aaaazzcccdaa";
    string res="";
    res.push_back(str[0]);
    int i=0,j=1;
    while(j<str.length()){
        if(str[j]!=str[j-1]){
            int d=j-i;
            if(d>1)res+=to_string(d);
            res.push_back(str[j]);
            i=j;
            j++;
        }
        else {
            j++;
        }
    }
    if(j-i>1)res+=to_string(j-i);
    cout<<res;
}