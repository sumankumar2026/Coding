#include <iostream>
using namespace std;

// Function to update values
void update(int **ptr)
{
    // ptr = ptr + 1;

    // *ptr = *ptr + 1;
    **ptr = **ptr;
}

int main()
{
    int i = 5;
    int *p = &i;
    int **p2 = &p;

    cout << endl
         << "sab kuch badhiya chal raha hai " << endl;

    cout << "Before the updation: " << endl;

    cout << "Before: " << i << endl;
    cout << "Before: " << p << endl;
    cout << "Before: " << p2 << endl;

    // Call update function
    update(p2);

    cout << "After the updation: " << endl;
    cout << "after:" << i << endl;
    cout << "after:" << p << endl;
    cout << "after:" << p2 << endl;
    return 0;
}
