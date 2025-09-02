/*
Write a C++ program that prompts the user to enter a person's age and marital status (single, married, divorced). The program should use nested if-else statements to determine and print the category the person falls into based on the age and marital status.

Example:
If the user enters 25 and single, the program should output: "You are a young adult and single."
If the user enters 45 and married, the program should output: "You are an adult and married."
*/

#include <iostream>
using namespace std;
int main()
{
    int age;
    string status;
    cout << "Enter your age: ";
    cin >> age;
    if (age >= 18)
    {
        cout << "Enter your marital status: ";
        cin >> status;
        if (status == "single")
        {
            cout << "You are a young adult and single";
        }
        else if (status == "married")
        {
            cout << "You are an adult and married.";
        }
        else
        {
            cout << "you are an adult and apka patni nahi hai lgta hai ki.";
        }
    }

    else
    {
        cout << "abhi padho likho yrr";
    }
}