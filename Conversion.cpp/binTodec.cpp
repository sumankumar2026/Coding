#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int n;
    cout << "Enter binary number: ";
    cin >> n;

    int i = 0, ans = 0;
    while (n != 0)
    {
        int digit = n % 10;  //compiler asssume input is in digit not in binary that's why we use modulo
        if (digit == 1)
        {
            ans = (ans + pow(2, i));
        }
        n = n / 10;
        i++;
    }
    cout << "Answer is " << ans << endl;
}