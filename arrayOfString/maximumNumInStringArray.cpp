#include <iostream>
#include <climits>
using namespace std;
int main()
{
   string a[]={"0213","5434","54322","342","000123"};
      int m = sizeof(a) / sizeof(a[0]),max=INT_MIN;
     for(int i=0;i<m;i++){
       if(stoi(a[i])>max)max=stoi(a[i]);
     } 
     cout<< max;
}