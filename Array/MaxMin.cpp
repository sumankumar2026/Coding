#include <iostream>
using namespace std;

int getMax(int num[], int n)
{
    int maxi = num[0];
    for (int i = 0; i < n; i++)
    {
        maxi = max(maxi,num[i]);  //it is a library max
        // if (num[i] > max)
        // {
        //     max = num[i];
        // }
    }
    return maxi;
}

int getMin(int num[], int n)
{
    int mini = num[0];
    for (int i = 0; i < n; i++)
    {
        mini = min(mini,num[i]);
        // if (num[i] < min)
        // {
        //     min = num[i];
        // }
    }
    return mini;
}

int main()
{
    int size;
    cin >> size;
    int num[100];

    for (int i = 0; i < size; i++)
    {
        cin >> num[i];
    }

    cout << "get Maximum number in a array " << getMax(num, size) << endl;
    cout << "get Minimum number in a array " << getMin(num, size) << endl;
}