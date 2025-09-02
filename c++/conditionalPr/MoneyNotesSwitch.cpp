#include <iostream>
using namespace std;
int main()
{
    int amount;
    cout << "Enter the amount of money: ";
    cin >> amount;
    int hun, ten, twenty, one;

    switch (amount)
    {
    case 1330:

        hun = amount / 100;
        cout << "you hava a notes of hundred is: " << hun << endl;

        amount = amount % 100;
        twenty = amount / 20;
        cout << "you have a notes of 20 is: " << twenty << endl;

        amount = amount % 20;
        ten = amount / 10;
        cout << "you have a notes of 10 is: " << ten << endl;
        amount = amount % 10;

        cout << "remaining amounnt is: " << amount << endl;

        break;

    case 1256:
        hun = amount / 100;
        cout << "you hava a notes of hundred is: " << hun << endl;

        amount = amount % 100;
        twenty = amount / 20;
        cout << "you have a notes of 20 is: " << twenty << endl;

        amount = amount % 20;

        ten = amount / 10;
        cout << "you have a notes of 10 is: " << ten << endl;
        amount = amount % 10;
        one = amount / 1;
        cout << "you have a notes of 1 is: " << one << endl;
        amount = amount % 1;
        cout << "remaining amounnt is: " << amount << endl;

        break;
    }
}