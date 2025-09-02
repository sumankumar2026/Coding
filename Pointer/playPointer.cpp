#include <iostream>
using namespace std;
int main()
{
    // playing with pointer..
    int i = 5;
    int *q = &i;
    cout << "value is: " << *q << endl;
    cout << "address is: " << q << endl;

    // int *p = 0;
    // p = &i;
    // cout << "value is: " << *p << endl;
    // cout << "address is: " << p << endl;

    int num = 5;
    int *p = &num;
    (*p)++; // bracket is very important...
    cout << "value of num is: " << num << endl;
    // cout << "Addrees is: " << num;

    int *suman = NULL;
    if (suman == 0)
    {
        cout << "pointer is null here.." << endl;
    }
    else
    {
        cout << "pointer is not null here.." << endl;
    }
    return 0;
}