#include <iostream>
using namespace std;
int main()
{
    int num = 5;
    int *ptr = &num;
    cout << "value of ptr before increment: " << *ptr << endl;
    cout << "value of ptr before increment: " << num << endl;

    (*ptr)++;
    cout << "value of ptr after increment: " << *ptr << endl;
    cout << "value of ptr before increment: " << num << endl;

    int *ptr1 = ptr;  //copy a pointers..
    cout << "address of ptr1 is: " << ptr1 << endl;
    cout << "address of ptr1 is: " << ptr << endl;

    cout << "Value of ptr1 is: " << *ptr1 << endl;
    cout << "Value of ptr is: " << *ptr << endl;


    
    int *suman = 0;
    cout << "suman is: " << suman << endl;
    cout << " value is: " << *suman <<"is here " <<  endl;


    return 0;
}