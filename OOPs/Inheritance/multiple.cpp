#include <iostream>
using namespace std;

class Animal {
public:
    // Public member functions to access private members
    void setWeight(int weight) {
        this->weight = weight;
    }

    void getWeight() const {
        cout << "Weight: " << weight << endl;
    }

    virtual void sound() = 0; // Pure virtual function

    int age; // Public member variable

private:
    int weight; // Private member variable
};

class Human {
public:
    string color;
    void speak() {
        cout << "speak abuse word only " << endl;
    }
};

class Multi : public Animal, public Human {
public:
    void sound() override { // Override the pure virtual function
        cout << "multi sound" << endl;
    }
};

int main() {
    Multi m1;
    m1.sound();
    m1.speak();
    return 0;
}
