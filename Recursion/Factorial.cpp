#include <iostream>
using namespace std;

int Factorial(int n)
{

    if (n == 0)
        return 1;

    int smallerProb = Factorial(n - 1);  // function call itself..
    int biggerProb = n * smallerProb;

    return biggerProb;
}

int main()
{
    int n;
    cin >> n;

    int ans = Factorial(n);

    cout << ans << endl;

    return 0;
}