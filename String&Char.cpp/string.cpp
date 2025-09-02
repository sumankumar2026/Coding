#include<iostream>
using namespace std;
int main(){

    // string s4;
    // s4 = "Hello";
    // string s3(s4);

    // // cout <<"output of s1: " << s1 <<endl;
    // // cout << "copy of s1: " << s2 << endl;

    // cout << s4[0] << endl; // output is H..
    // cout << s3.at(3) << endl;  // output is l..

    // Modifying Strings:

    string s = "Hello";

    s.append(", world");  // s is now "Hello, world"
    cout << s <<endl;

    s.insert(5, " dear");  // s is now "Hello dear, world"
    cout << s <<endl;

    s.erase(5, 5);  // s is now "Hello, world"
    cout << s <<endl;

    string s1 = "Apple";
string s2 = "Banana";
cout << (s1 == "Apple");  // Output: true
cout << (s1 != s2);  // Output: true
cout << (s1 < s2);  // Output: true
cout << (s1 > s2);  // Output: false
    return 0;
}