#include <iostream>
using namespace std;

int main()
{
    int arr[] = {5, 4, 6, 3, 9, 7, 8};
    int n = sizeof(arr) / sizeof(arr[0]);

    for (int i = 1; i < n - 1; i++)
    {
        bool flag = true;
        for (int j = 0; j < n - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
                flag = false;
            }
        }
        if (flag == true)
            break;
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}  // time-complexity is O(n2)..
// best case = O(n)..