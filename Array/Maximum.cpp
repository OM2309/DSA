#include <iostream>
using namespace std;

int maximum(int arr[], int size)
{
    int max = INT8_MIN;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    return max;
}

int main()
{
    int arr[10] = {0, 1, 2, 3, 20, 5, 6, 7, 8, 9};
    int size = 10;
    int result = maximum(arr, size);
    cout << result << endl;
    return 0;
}