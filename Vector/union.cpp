#include <bits/stdc++.h>
using namespace std;

int main()
{

    int array1[] = {1, 2, 3, 4, 5};
    int array2[] = {6, 7, 8, 9, 10};

    vector<int> array3;

    for (int i = 0; i < 5; i++)
    {
        array3.push_back(array1[i]);
    }

    for (int i = 0; i < 5; i++)
    {
        array3.push_back(array2[i]);
    }

    for (int i = 0; i < 10; i++)
    {
        cout << array3[i] << endl;
    }

    return 0;
}