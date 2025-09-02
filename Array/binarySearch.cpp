#include <iostream>
using namespace std;

int BinarySearch(int arr[], int size, int key)
{
    int start = 0;
    int end = size - 1;
    int mid = (start+end)/2;  // start + (end-start)/2  this is for leeetcode testcase  optimize
    int mid = (start+end)/2;  

    while (start <= end)
    {
        if (arr[mid] == key)
        {
            return mid;
        }
        else if (arr[mid] < key)
        {
            start = mid + 1; // right ke liye
        }
        else
        {
            end = mid - 1; // left ke liye
        }
        mid = (start+end)/2;
    }
    return -1;
}

int main()
{
    int even[6] = {2, 3, 4, 6, 7, 9};
    int odd[5] = {3, 5, 6, 7, 8};

    int index = BinarySearch(even, 6, 9);
    cout << "Index of 6 is: " << index << endl;

    int index2 = BinarySearch(odd, 5, 6);
    cout << "Index of 6 is: " << index2 << endl;
}