#include <iostream>
using namespace std;
int sumElement(int arr[], int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum = sum + arr[i];
    }
    // cout << "Sum of element is : " << sum << endl;
    return sum;
}
int main()
{
    int size;
    cout << "Enter size of array: ";
    cin >> size;
    int arr[100];
    cout << "Enter elements of array: ";
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    int ans = sumElement(arr, size);
        cout << ans << endl;
}