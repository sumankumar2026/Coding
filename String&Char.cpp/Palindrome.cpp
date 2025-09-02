#include <iostream>
#include <cstring>
using namespace std;

bool palindrome(char name[], int n) {
    int start = 0, end = n - 1;
    while (start <= end) {
        if (name[start] != name[end]) {
            return false;
        }
        start++;
        end--;
    }
    return true;
}
int main() {
    char name[100];
    cout << "Enter your name: ";
    cin >> name;
    cout << "Your name is: " << name << endl;

    cout << "Palindrome or not? " << palindrome(name, strlen(name)) << endl;
    return 0;
}
