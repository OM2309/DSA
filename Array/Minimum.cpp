#include <iostream>
using namespace std;

int minimum(int arr[], int size)
{
    int min = INT8_MAX;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }
    return min;
}

int main()
{
    int arr[10] = {0, 10, 2, 3, 20, 5, 6, 7, 8, 9};
    int size = 10;
    int result = minimum(arr, size);
    cout << result << endl;
    return 0;
}