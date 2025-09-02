#include <iostream>
using namespace std;

char toLower(char ch)
{
    if (ch >= 'a' && ch <= 'z')
    {
        return ch;
    }
    else
    {
        char temp = ch - 'A' + 'a';
        return temp;
    }
}

int main()
{
    cout << toLower('a') << endl;
    cout << toLower('B') << endl;

    return 0;
}
