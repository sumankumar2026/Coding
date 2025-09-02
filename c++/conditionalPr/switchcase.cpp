#include <iostream>
using namespace std;
int main()
{
     char ch = 'A';

    cout << endl;
    switch (ch)
    {
    case 'A':
        cout << "First";
        break;

    case 'B':
        cout << "this is an second system";
        cout << "Second";
        break;

    default:
        cout << "This is an defaoult system";
    }
}