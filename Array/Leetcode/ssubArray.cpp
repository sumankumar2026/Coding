#include <iostream>
using namespace std;

void subArr(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        for (int j = i; j < size; j++)
        {
            int sum = 0; // Reset sum for each subarray
            for (int k = i; k <= j; k++)
            {
                cout << arr[k] << " ";
                sum += arr[k]; // Calculate sum
            }
            cout << "    -> sum is " << sum << endl;
        }
    }
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    subArr(arr, size);

    return 0;
}
