//to initialize the entire array...

#include <iostream>
using namespace std;
int main()
{
    const int size = 10;
    int arr[size];
    for (int i = 0; i < size; i++)
    { // to initialize an array...
        arr[i] = 24;
    }

    for (int i = 0; i < size; i++)  
    {// to verify...
        cout << arr[i] <<" ";
    }
    cout << endl;
    cout << "Accessing  the element of an array is: " << arr[2] << endl;
}