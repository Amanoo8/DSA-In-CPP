#include <iostream>
using namespace std;
int main()
{
    string str="I love you Satoru";
    int i=0,j=0,largestW=0;
    while(j<str.length()){
        if(str[j]!=' ')j++;
        else {
            if((j-i)>largestW)largestW=j-i;
            i=j+1;
            j++;
        }
    }
    if((j-i)>largestW)largestW=j-i;
    cout<<largestW;
}