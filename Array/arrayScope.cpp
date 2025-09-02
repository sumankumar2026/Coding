#include <iostream>
using namespace std;

int update(int arr[], int n)
{
    cout << "the beging of function.." << endl;

    // arr[0] = 120;  
    for (int i = 0; i < 3; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    cout << "Go back to the main funcion..." << endl;
}

int main()
{
    int arr[3] = {1, 2, 3};
    update(arr,3);
    for (int i = 0; i < 3; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

//but incase of varible only change in copy varible not in original variable.. but in case of array 
//conclusion:- if we pass an array to the function and by any chance we change the index value then change in original array not only function array.   becouse in case of array we pass address of array which is arr[i] where arr[i] is a starting address as well as name of array
