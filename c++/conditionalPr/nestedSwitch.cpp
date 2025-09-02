#include <iostream>
using namespace std;
int main()
{
    int num = 5;
    char ch = 's';

    switch (ch)
    {
    case 'j':
        cout << "this is jitesh kumar";
        break;

    case 's':
        switch (num)
        {
        case 1:
            cout << "this is num of suman";
            break;

        case 5:
            cout << "suman means Flower" << endl;
            cout << "from cse" << endl;
            cout << "Btech from Lpu" << endl;
            cout << "From bihar" << endl;

            break;
        }
        break;
    }
}