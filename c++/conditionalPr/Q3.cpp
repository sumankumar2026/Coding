//write a code for is input is uppercase or lowercase
#include <iostream>
using namespace std;
int main()
{
    char ch;
    cout << "Enter charcter: ";
    cin >> ch;

    if (ch >= 'a' && ch <= 'z')
    {
        cout << ch <<" is in lower case.";
    }

    else if (ch >= 'A' && ch <= 'Z')
    {
        cout << ch <<" is in upper case.";
    }

    else if (ch >= '0' && ch <= '9')
    {
        cout << ch <<" is in numberic value";
    }

    else
    {
        cout << ch << " special character value";
    }
}