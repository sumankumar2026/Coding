#include <iostream>
using namespace std;

int FirstOcc(int arr[], int size, int key)
{
    int ans = -1;
    int start = 0;
    int end = size - 1;

    while (start <= end)
    {
        int mid = (start + end) / 2;

        if (key == arr[mid])
        {
            ans = mid;
            end = mid - 1;
        }
        else if (key > arr[mid]) // right me aa jao
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }
    return ans;
}

int LastOcc(int arr[], int size, int key)
{
    int ans = -1;
    int start = 0;
    int end = size - 1;

    while (start <= end)
    {
        int mid = (start + end) / 2;

        if (key == arr[mid])
        {
            ans = mid;
            start = mid + 1;
        }
        else if (key > arr[mid]) // right me aa jao
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }
    return ans;
}

int main()
{
    int even[20] = {1, 3, 3, 3, 4, 5, 5, 5, 5, 5, 5, 6, 6, 6, 6, 6, 6, 6, 6, 66};
    cout << "First occurrence of 3 at index of " << FirstOcc(even, 20, 5) << endl;

    cout << "Last Occurence of 3 is at index of " << LastOcc(even, 20, 5) << endl;

    cout << "Total number of Occurence: " << (LastOcc(even, 20, 5) - FirstOcc(even, 20, 5)) + 1 << endl;
    return 0;
}
