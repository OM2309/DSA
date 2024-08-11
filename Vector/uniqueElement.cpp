// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     vector<int> arr{1, 1, 2, 2, 3, 4, 4, 5, 6};
//     vector<int> brr;

//     for (int i = 0; i < arr.size(); i++)
//     {
//         bool isUnique = true;
//         for (int j = 0; j < arr.size(); j++)
//         {
//             if (i != j && arr[i] == arr[j])
//             {
//                 isUnique = false;
//                 break;
//             }
//         }
//         if (isUnique)
//         {
//             brr.push_back(arr[i]);
//         }
//     }

//     for (int i = 0; i < brr.size(); i++)
//     {
//         cout << brr[i] << " ";
//     }
//     cout << endl;

//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;

int findUnique(vector<int> arr)
{
    int ans = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        ans = ans ^ arr[i];
    }
    return ans;
}

int main()
{
    int n;

    cout << "Enter the size of array " << endl;
    cin >> n;

    vector<int> arr(n);

    cout << "Enter the number of elements " << endl;

    for (int i = 0; i < arr.size(); i++)
    {
        cin >> arr[i];
    }

    int uniqueResult = findUnique(arr);

    cout << "Unique Element " << uniqueResult << endl;

    return 0;
}