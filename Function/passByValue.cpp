// #include <iostream>
// using namespace std;
// int dummy(int n)
// {
//     n++;
//     cout << "value of n " << n << endl;
// }

// int main()
// {
//     int num;
//     cin >> num;
//     dummy(num);
//     cout << "number is " << num << endl;

//     return 0;
// }

// pass by value :- it is basically create a copy to the function..

// practice question
// #include <iostream>
// using namespace std;
// void update(int a)
// {
//     a = a / 2;
// }
// int main()
// {
//     int a = 10;
//     update(a);
//     cout << a << endl;
// }

#include <iostream>
using namespace std;

int update(int a)
{
   int ans = a*a;
    return ans;
}

int main()
{
    int a = 14;
    a = update(a);
    cout << a << endl;
    return 0;
}