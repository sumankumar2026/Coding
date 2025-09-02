#include <iostream>
//vedio 28 timing: 27:20...
using namespace std;
int Sum(int arr[], int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum = sum + arr[i];
    }
    return sum;
}
int main()
{
    int n;
    cout << "Enter size of Array: ";
    cin >> n;
    // variable size input...
    int *arr = new int[n];  //dynamic
    /// taking input
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int ans = Sum(arr, n);
    cout << "Answer is this: " << ans << endl;
    return 0;
}