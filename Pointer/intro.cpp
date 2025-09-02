#include <iostream>
using namespace std;

int main()
{
    int num = 5;
    // cout << "address of num is: " << &num << endl; // 0x61ff0c  address of num as per compiler

    int *ptr = &num;
    cout << "value is: " << *ptr << endl;
    cout << "address is: " << ptr << endl;

    double d = 4.2;
    double *d2 = &d;

    cout << "value is: " << *d2 << endl;
    cout << "address is: " << d2 << endl;

    cout << "Size of integer: " << sizeof(num) << endl;
    cout << "Size of pointer: " << sizeof(d2) << endl; //its depend on compiler but mostly ans is 8..
    cout << "Size of pointer: " << sizeof(ptr) << endl;

    /*
    
#include<iostream>
using namespace std;

int main(){
   int a = 10;      // Declare and initialize an integer variable 'a'
   int *ptr = &a;   // Declare a pointer 'ptr' and initialize it to the address of 'a'
   
   cout << "address of a: " << &a << endl;  // Print the address of 'a' using the address-of operator '&'
   cout << "address of a: " << *ptr << endl; // Print the value of 'a' by dereferencing the pointer 'ptr'
   cout << "address of a: " << ptr << endl;  // Print the address stored in 'ptr', which is the address of 'a'
   
   return 0;
}


    */


    //playing with pointer..
    int i = 5;
    int *p = &i;
    cout << "value is: " << *p << endl;
    cout << "address is: " << p << endl;

    int *p = 0;
    p = &i;
    cout << "value is: " << *p << endl;
    cout << "address is: " << p << endl;

    return 0;
}