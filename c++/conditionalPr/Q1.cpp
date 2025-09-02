// write a code for a number is +ve or -ve ya 0.
#include <iostream>
using namespace std;
int main()
{
    int a;
    cout << "Enter 1st number: ";
    cin >> a;
    if (a > 0)
    {
        cout << a << " is the +ve number";
    }
    else
    {
        if (a < 0)
        {
            cout << a << " is the -ve number";
        }
        else
        {
            cout << a << " is the 0 number";
        }
    }
}