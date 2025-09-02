#include <iostream>
using namespace std;
int main()
{
    for (int i = 0; i <= 5; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    for (int i = 0; i <= 4; i++)
    {
        for (int j = 1; j < 5 - i + 1; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}