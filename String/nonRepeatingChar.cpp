#include<vector>
#include<iostream>
using namespace std;
int main(){
 string s;
 cin>>s;
 int m=s.length();
 char ans;
 for(int i=0;i<m;i++){
    int c=0;
    for(int j=0;j<m;j++){
        if(s[j]==s[i])c++;
    }
    if(c==1){
        ans=s[i];
        break;
    }
 }
 cout<<ans;
}
