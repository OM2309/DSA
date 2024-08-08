#include <iostream>
using namespace std;

void countOnesAndZeros(int arr[], int size, int &countOnes, int &countZeros)
{
    countOnes = 0;
    countZeros = 0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == 1)
        {
            countOnes++;
        }
        else if (arr[i] == 0)
        {
            countZeros++;
        }
    }
}

int main()
{
    int arr[10] = {1, 1, 1, 1, 1, 0, 0, 0, 0, 0};
    int size = 10;
    int ones, zeros;
    countOnesAndZeros(arr, size, ones, zeros);
    cout << "Number of ones: " << ones << endl;
    cout << "Number of zeros: " << zeros << endl;
    return 0;
}