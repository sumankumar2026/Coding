#include <iostream>
using namespace std;
bool search(int arr[], int size, int key)
{
    for (int i = 0; i < size; i++)
    {
        if (key == arr[i])
        {
            cout << "At Index Number: " << i << endl;
            return 1;
        }
    }
    return 0;
}
int main()
{
    int arr[10] = {1, 2, 5, 8, 6, 4, -9, 8, -3, -7};
    int key;
    cout << "Enter a key ";
    cin >> key;
    bool found = search(arr, 10, key);
    if (found)
    {
        cout << "key is present " << endl;
    }
    else
    {
        cout << "Key is absent " << endl;
    }
}