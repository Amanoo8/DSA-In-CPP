#include<vector>
#include<iostream>
using namespace std;
int main(){
 string s;
 cin>>s;
 int m=s.length();
 int i=0,j=0;
 char ans;
 while(i<m){
    int c=1;
    if(i==0||s[i]!=s[i-1]){
        j=i+1;
        while(s[j]==s[j-1]||j==0){
         c++;
         j++;
         i=j;
        }
    }
    if(c==1){
        ans=s[i];
        break;
    }
 }
 cout<<ans;
}
