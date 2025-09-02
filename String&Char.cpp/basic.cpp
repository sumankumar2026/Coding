#include <iostream>
using namespace std;

int getLength(char ch[])
{
    int count = 0;
    for (int i = 0; ch[i] != '\0'; i++)
    {
        count++;
    }
    return count;
}

int main()
{
    char ch[10];
    cout << "Enter your name: ";
    cin >> ch;
    // cout << endl;
    cout << "Your name is: " << ch << endl;
    cout << "Length is: " << getLength(ch) << endl;
    return 0;
}