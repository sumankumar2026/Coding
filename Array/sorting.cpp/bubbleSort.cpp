#include <iostream>
using namespace std;

int main()
{

    int arr[] = {1, 3, 8, 9, 4, 6};
    int n = sizeof(arr) / sizeof(arr[0]);

    for (int i = 1; i <= n - 1; i++) // for passing only..
    {
        for (int j = 0; j < n - 1-i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}