#include <iostream>
using namespace std;

int main()
{
    int arr[10] = {10, 20, 30, 40, 50, 60, 70, 80};
    int size = 10;

    int start = 0;
    int end = size - 1;

    while (true)
    {
        if (start > end)
        {
            break;
        }

        if (start == end)
        {
            cout << arr[start] << endl;
        }
        else
        {

            cout << arr[start] << endl;
            cout << arr[end] << endl;
            start++;
            end--;
        }
    }
    return 0;
}
