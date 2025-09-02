#include <iostream>
using namespace std;
int main()
{
    /*int arr[10] = {1, 2, 3, 4, 5, 6};
    int *ptr = arr;
    cout << *ptr << endl;
    cout << *(ptr + 1) << endl;
    cout << "address of first block of array is: " << arr << endl; // 0x61fee8 is the address of first block...
    cout << "address of second block of array is: " << &arr[0] << endl;
    cout << "address of third block of array is: " << &arr[2] << endl;
    cout << "value of first block of array is: " << *arr << endl;
    cout << "value of second block of array is: " << *(arr + 1) << endl;
    cout << "value of third block of array is: " << *(arr + 2) << endl;

    cout << "another type: " << ++arr[0] << endl;
    cout << "another type: " << arr[0]++ << endl;
    cout << "another type: " << arr[0]++ << endl;

    cout << "playing: " << (*arr) + 1 << endl; // both are same
    cout << "playing: " << *(arr) + 1 << endl;
    cout << "playing: " << *(arr + 1) << endl;

    int i = 3;
    cout << i[arr+1] << endl;  //very tricky..*/

    int temp[10] = {1,2,3,4,5,6,7,8,9,10};
    cout << sizeof(temp) << endl;

    int *ptr = &temp[0];
    cout << sizeof(ptr) << endl;
    cout << sizeof(*ptr) << endl;
    cout << sizeof(&ptr) << endl;

//errror
    // cout << arr = arr+1;
    int *qtr = &temp[0];
    cout<<"-> " << qtr << endl;
    cout << *qtr << endl;
    qtr = qtr+1;
    cout << qtr << endl;
    cout << *qtr << endl;



    return 0;
}