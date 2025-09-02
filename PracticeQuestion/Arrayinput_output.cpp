#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter size of array: ";
    cin>>n;
    int arr[n];
    cout << "Input aarray is: ";
    for (int i = 0; i < n; i++)
    { // input array
        cin >> arr[i];
    }
    cout << "Output Array is this: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}