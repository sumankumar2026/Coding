#include <iostream>
using namespace std;

// 1 is prime no.
// 0 is not prime no.
bool isPrime(int n)
{
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            return 0;
        }
    }
    return 1;
}

int main()
{
    int n;
    cout << "Enter number: ";
    cin >> n;

    if (isPrime(n))
    {
        cout << "not a Prime number";
    }
    cout << "prime number";

    return 0;
}