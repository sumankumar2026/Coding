#include<iostream>
using namespace std;

class Human{
    public:
    int height;
    int weight;
    int age;

    int getAge(){
        return this->age;
    }

    void setWeight(int w){
        this->weight = w;
    }

};

class Male : public Human{
    public:
    string color;

    void sleeping(){
        cout << "male is in sleeping mode" << endl;
    }

};

int main(){

    Male object1;
    cout << object1.age << endl;
    cout << object1.color << endl;
    cout << object1.height << endl;
    cout << object1.weight << endl;

    object1.sleeping();
    object1.setWeight(75);
    cout << object1.weight << endl;
    return 0;
}