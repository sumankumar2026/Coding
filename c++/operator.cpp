#include <iostream>
#include <bitset>
using namespace std;
int main()
{
    int a = 5;
    int b = 6;
    int result = a + b;
    cout << "a(in decimal) " << a << endl;
    cout << "a(in binary) " << bitset<6>(a) << endl;
    cout << "result(in decimal) " << result << endl;
    cout << "result(in binary) " << bitset<8>(result) << endl;

    int z = a + b + 56;
    cout << z;
    return 0;
}