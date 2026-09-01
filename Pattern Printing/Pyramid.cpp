#include <iostream>
#include <climits>
using namespace std;
int main()
{
    int n;
    cin >> n;
    // Sidha pyramid
    for (int i = 1; i <= n; i++)
    {
        for (int j = n; j >= i + 1; j--)
        {
            cout << "  ";
        }
        for (int j = 1; j <= 2 * i - 1; j++)
        {
            cout << "* ";
        }
        cout << endl;
        // ulta pyramid
        //   for(int i=n;i>=1;i--){
        //     for(int j=n;j>=i+1;j--){
        //         cout<<"  ";
        //     }
        //     for(int j=1;j<=2*i-1; j++){
        //         cout<<"* ";
        //     }
        //     cout<<endl;
    }
}
