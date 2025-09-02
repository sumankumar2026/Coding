#include <iostream>
using namespace std;

int main()
{
    int arr[] = {5, 2, 5, 6, 1, 0, 4,-8};
    int size = sizeof(arr) / sizeof(arr[0]);

    for (int i = 0; i < size - 1; i++)
    {
        int min = arr[i];
        int mindx = i;

        for (int j = i + 1; j < size; j++)
        {
            if (arr[i] > arr[j])
            {
                min = arr[j];
                mindx = j;
            }
        }
        swap(arr[i], arr[mindx]);
    }

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}
