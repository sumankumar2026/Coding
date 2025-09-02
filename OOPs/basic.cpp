#include <iostream>
// #include "Hero.cpp"  // including external file
using namespace std;

class Hero
{
//  properties
    private:
    int health = 4;
    public:
    string str = "suman singh";

    int getHealth(){
        return health;
    }

    void setHealth(int h){
        health = h;
    }

};

int main()
{
    Hero h1; // statically allocation.
    // cout << "Size : " << sizeof(h1) << endl;
    h1.setHealth(50);
    cout << h1.getHealth() << endl;

    // cout << h1.health << endl;
    // cout << h1.str << endl;
    // cout << print();

    return 0;
}