#include <iostream>
using namespace std;
class Hero
{
private:
    int health = 4; 

public:
    string str = "suman singh";

    Hero()
    {
        cout << "constructor is called baby" << endl;
    }

    Hero(int health){

        cout << "address of this: " << this << endl;
        this->health = health;
    }

    int getHealth()
    {
        return health;
    }

    void setHealth(int h)
    {
        health = h;
    }
};

int main()
{
    // // static allocation.
    // cout << "hii" << endl;
    // Hero ramesh;
    Hero ramesh(10);
    cout << "address of ramesh: " << &ramesh << endl;
    cout << ramesh.getHealth();
    cout << endl;
    cout << "Hello";
    // ramesh.setHealth(10);
    // cout << ramesh.getHealth() << endl;

    // //dynamically allocation.
    // Hero *ramesh1 = new Hero;
    // ramesh1 -> setHealth(70);
    // cout << ramesh1 -> getHealth();

    return 0;
}