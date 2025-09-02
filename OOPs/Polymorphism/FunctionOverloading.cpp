#include <iostream>
using namespace std;

class poly
{
public:
    void func()
    {
        cout << "this is poly function" << endl;
    }

    void func(int n)
    {
        cout << "this is poly function 2" << endl;
    }
    // int func(){  
    //     return 0;
    // }
    // int func(int n){
    //     return n;
    // }
};

int main()
{

    poly p1;
    p1.func();

    return 0;
}