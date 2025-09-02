#include <iostream>
using namespace std;

void update2(int&n){
    n++;
}

void update(int n){
    n++;
    // cout << n << endl;  //pass by value: is copy
}

int main()
{

    /*int i = 5;
    int &j = i;
    cout << i << endl;
    i++;
    cout << i << endl;
    j++;
    cout << i << endl;
    j++;
cout << j << endl;
*/

    int n = 5;
    cout << "Before: " << n <<endl;
    update2(n);
    cout << "After: " << n << endl;
    n++;
    cout << "After: " << n << endl;
    update2(n);
        cout << "After: " << n << endl;


    return 0;
}