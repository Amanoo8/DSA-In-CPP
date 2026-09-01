#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
bool twosum(vector<int> a,int m, int t)
{
    int i = 0, j = m - 1;
    while (i < j)
    {
        if (a[i] + a[j] == t)
            return true;
        else if (a[i] + a[j] < t)
            i++;
        else
            j--;
    }
    return false;
}
int main()
{
    int t;
    cin>>t;
    vector<int> a = {1, 2, 3, 4, 5, 6, 7};
    int m = a.size();
    sort(a.begin(), a.end());
    if(twosum(a,m,t))cout<<"yes";
    else cout<<"no";
}