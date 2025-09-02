#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> v;

    vector<int> a(5,2);  // here 5 is the size of vector with initialize by 1...
    cout << "printing a" << endl;

    for(int i:a){
        cout << i << " ";
    } cout << endl;


    vector<int> last(a);  //here we copy a vector a to the vector last..
     cout << "printing last " << endl;
    for(int i:last){
        cout << i << " ";
    } cout << endl;

    cout << "capacity: " << v.capacity() << endl;

    v.push_back(1);
    cout << "capacity: " << v.capacity() << endl;

    v.push_back(2);
    cout << "capacity: " << v.capacity() << endl;

    v.push_back(3);
    cout << "capacity: " << v.capacity() << endl;
    // cout << "size: " << v.size() << endl;

    v.push_back(4);
    cout << "capacity: " << v.capacity() << endl;

    v.push_back(5);
    cout << "capacity: " << v.capacity() << endl;

    cout << "front: " << v.front() << endl;
    cout << "bak: " << v.back() << endl;
    cout << "Element at Index: " << v.at(3) << endl;

    cout << "before pop " << endl;

    for (int i : v)
    {
        cout << i << " ";
    }
    cout << endl;

    v.pop_back();

    cout << "After pop " << endl;

    for (int i : v)
    {
        cout << i << " ";
    }
    cout << endl;

    v.pop_back();

    cout << "Before Clear Size: " << v.size() << endl;

    v.clear();

    cout << "After clear size: " << v.size() << endl;
    cout << "Capacity of vector: " << v.capacity() << endl;
    return 0;
}