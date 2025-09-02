// write a code for printing 1 to N
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter number: ";
    cin >> n;
    int i = 1;
    while (i <= n)  //condition
    {
        cout << i << " " << endl;
        i = i + 1;
    }
}