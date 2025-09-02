#include<iostream>
#include<iomanip>
using namespace std;
int main() {
    int num;
    double pi = 3.141542;
    // cout << "Enter number:- ";
    // cin >> num;
    // cout << "Entered numbe:- " << num << endl;
    cout << pi << endl;
    cout << setprecision(2) << fixed <<"value of pi:- " <<  pi << endl;

    int a = sizeof(char);
    cout << a;
    return 0;

}