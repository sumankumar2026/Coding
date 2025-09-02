#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the number of rows: ";
    cin >> n;
    for (int i = 1; i <= n; i++)  //outer loop
    {
        for (int j = 1; j <= i; j++)  // inner loop
        {
            cout << i << " ";  //we can also try j
        }
        cout << endl;
    }
}