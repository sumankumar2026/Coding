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

class Dog : public Animal {
public:
    void sound() override { // Override the pure virtual function
        cout << "barking" << endl;
    }
};

class germanspered: public Dog{
    public:
    void sound() override{
        cout << "tighly barked like sherrr" << endl;
    }
};

int main() {
    Dog d1;
    germanspered g1;
    g1.sound();
    d1.age = 5; // Assigning age value
    cout << "Age: " << d1.age << endl;
    d1.sound();
    d1.setWeight(15);
    d1.getWeight();

    return 0;
}
