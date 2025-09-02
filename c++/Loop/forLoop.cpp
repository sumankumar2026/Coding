// Write a code for printing 1 to N
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter number: ";
    cin >> n;
    int sum =0;
    for(int i = 1;i<=n;i++){
        cout << i << " ";
        sum = sum+i;
        
    }
    cout << endl << "Sum of number is : " << sum <<endl;

    // cout << sum;
}