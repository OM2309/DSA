#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> arr;
    // cout << arr.size() << endl;
    // cout << arr.capacity() << endl;

    // insert
    arr.push_back(5);
    arr.push_back(6);

    // print
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << endl;
    }

    // remove
    arr.pop_back();

    cout << endl;

    // print
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << endl;
    }

    vector<int> brr(10, -1);
    cout << "Size of b " << brr.size() << endl;
    cout << "capacity of b " << brr.capacity() << endl;

    for (int i = 0; i < brr.size(); i++)
    {
        cout << brr[i] << endl;
    }

    vector<int> crr{10, 20, 20, 30};

    // int n;
    // cout << "Enter the size of the vector" << endl;
    // cin >> n;
    // vector<int> arr(n);
    return 0;
}