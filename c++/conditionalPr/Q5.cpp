/*
Write a C++ program that prompts the user to enter three numbers. The program should determine which of the three numbers is the largest and output the largest number.

Example:
If the user enters 5, 9, and 3, the program should output: "The largest number is 9."
If the user enters 15, 7, and 15, the program should output: "The largest number is 15."
*/
#include <iostream>
using namespace std;
int main()
{
    int a, b, c;
    cout << "Enter a number:- ";
    cin >> a >> b >> c;
    if (a > b && a > c)
    {
        cout << a << " is the largest number among them.";
    }
    else if (b > a && b > c)
    {
        cout << b << " is the largest number among them.";
    }
    else
    {
        cout << c << " is the largest number among them.";
    }
}