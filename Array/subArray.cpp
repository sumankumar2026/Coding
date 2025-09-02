#include <iostream>
using namespace std;

void subArray(int arr[], int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            cout << "Subarray: ";

            for (int k = i; k <= j; k++)
            {
                cout << arr[k] << " ";
                sum = sum + arr[k];
            }
             cout<< "sum is "<< sum;
            cout << endl;
        }
    }
    
}
int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(int);
    subArray(arr, n);
    return 0;
}