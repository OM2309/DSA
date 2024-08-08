// Linear Search

#include <iostream>
using namespace std;

int linear_search(int arr[], int size, int item)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == item)
        {
            cout << "Item found";
        }
    }

    return -1;
}

int main()
{
    int arr[10] = {0, 1, 2, 3, 4, 5, 6, 78, 9};
    int item = 9;
    int result = linear_search(arr, 10, item);
    if (result == -1)
    {
        cout << "Item not found";
    }
    return 0;
}