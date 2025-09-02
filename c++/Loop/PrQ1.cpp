/*Write a C++ program that prints the numbers from 1 to 100. However, for multiples of 3, print "Fizz" instead of the number, and for multiples of 5, print "Buzz". For numbers which are multiples of both 3 and 5, print "FizzBuzz".*/

#include <iostream>
using namespace std;
int main()
{
    // int num;
    // cout << "Enter Number: ";
    int FizzBuzzCount = 0;
    int FizzCount = 0;
    int BuzzCount = 0;
    for (int i = 1; i <= 100; i++)
    {
        if (i % 3 == 0 && i % 5 == 0)
        {
            cout << "FizzBuzz" << endl;
            FizzBuzzCount++;
        }
        else if (i % 3 == 0)
        {
            cout << "Fizz" << endl;
            FizzCount++;
        }
        else if (i % 5 == 0)
        {
            cout << "Buzz" << endl;
            BuzzCount++;
        }

        cout << i << " " << endl;
    }
    cout << "Total Count Of FizzBuzz: " << FizzBuzzCount << endl;
    cout << "Total Count of Fizz : " << FizzBuzzCount << endl;
    cout << "Total Count of Buzz: " << BuzzCount << endl;

    return 0;
}