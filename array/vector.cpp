#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> arr(8, -1);
    cout << arr.size();
    cout << endl;
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
    arr.push_back(5);
    cout << endl;
    cout << arr.size();
    cout << endl;
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
}