#include <iostream>
using namespace std;
int main()
{
    // declare an array.
    int arr[15];

    // accessing the array..
    cout << "accessing the element of 12 index: " << arr[12];

    // initialize an array..

    int num[10] = {1, 2, 3, 45, 6, 5, 8, 4, 6, 8};
    cout << endl;
    cout << "accessing the 6 index: " << num[6] << endl;
    cout << "Everything is fine" << endl;

    int third[15] = {2, 8, 6, 4};
    // for printing the array..

    for (int i = 0; i < 15; i++)
    {
        cout << third[i] << " ";
    }
}