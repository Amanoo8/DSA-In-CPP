#include <iostream>
#include <climits>
using namespace std;
int main()
{
    // int n;
    // cin >> n;
    // for (int i = 1; i <= n; i++)
    // {
    //     for (int j = 1; j <= n; j++)
    //     {
    //         if (j+i <= n)
    //         {
    //             cout << "  ";
    //         }
    //         else
    //         {
    //             cout << "* ";
    //         }
    //     }
    //     cout << endl;
    // }

    //Method 2
    int n;
     cin>>n; 
     for(int i=1;i<=n;i++){
         for (int k=n;k>=i+1;k--){
            cout<<"  ";
        }
        for (int j=1;j<=i;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
}
