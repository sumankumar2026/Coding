#include <iostream>
using namespace std;
int main()
{
    int a,b,c;
    // cout << "Enter a number: ";
    // cin >> a;
    // cout << "Enter 2nd number: ";
    // cin >> b;
    // cout << "Enter 3rd number: ";
    // c = cin.get(); //for ascii value check..
    // cout << "Number is " << a << " "<< b << c << endl;
    // cout << c << endl;
    cout <<"Enter the value of a: ";
    cin >> a;
    cout <<"Enter the value of a: ";
    cin >> b;
    if(a>b){
        cout << a <<" is greater than "<< b << endl;
    }
    else{
        cout << b <<" is greater than "<< a << endl;
    }

    return 0;
}