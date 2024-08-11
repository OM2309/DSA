#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> arr{1, 2, 3, 4, 5, 6, 7, 8, 3};
    vector<int> brr{3, 3, 4, 10};
    vector<int> crr;

    for (int i = 0; i < arr.size(); i++)
    {
        int element = arr[i];
        for (int j = 0; j < brr.size(); j++)
        {
            if (element == brr[j])
            {
                crr.push_back(element);
                brr[j] = -1;
            }
        }
    }

    // for (int k = 0; k < crr.size(); k++)
    // {
    //     cout << crr[k] << endl;
    // }

    for (auto value : crr)
    {
        cout << value << endl;
    }

    return 0;
}