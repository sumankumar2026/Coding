#include <iostream>
using namespace std;

void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << "everything is fine bro " << endl;
}

int main()
{
    int first[5] = {2, 5, 3, 6, 4};
    int n = 5;
    printArray(first, n);

    int second[10] = {1, 2, 5, 3};
    // n = 10;
    printArray(second, 10);

    //to find the size of arraay.
    int secondsize = sizeof(second) / sizeof(int);
    cout << secondsize;

    return 0;
}