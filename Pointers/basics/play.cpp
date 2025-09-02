#include<iostream>
using namespace std;
int main(){
    int num = 5;
    int a = num;  // copy

    cout << "A before: " << num << endl;
    a++;
    cout << "A After: " << num << endl;

    int *ptr = &num;
    cout << "Before " << *ptr << endl;

    (*ptr)++;

    cout << "After " << *ptr << endl;

    cout << "Value of num: " << num << endl;

    int *q = ptr;
    cout << ptr << "- " << q << endl;
    cout << *ptr << "- " << *ptr << endl;

    return 0;
}