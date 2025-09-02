//Grading system in school
// 100 - 90 --> Outstanding.
// 80 - 89 --> A+
// 70 - 79 --> A
// 60 - 69 --> B+
// 50-59 --> B
// 40-49 --> C+
// 33-39 --> C
// marks < 33 --> padho bhai
#include<iostream>
using namespace std;
int main()
{
    int marks = 0;
    cout << "Enter marks: ";
    cin >> marks;

    if(marks >=90 && marks <= 100){
        cout <<"outstanding";
    }
    else if(marks >= 80 && marks <=89){
        cout <<"A+";
    }
    else if(marks >=70 && marks <= 79){
        cout << "A";
    }
    else if(marks >= 60 && marks <= 69){
        cout << "B+";
    }
    else if(marks >=50 && marks <=59){
        cout <<"B";
    }
    else if(marks >=40 && marks <= 49){
        cout << "C+";
    }
    else if(marks >= 33 && marks <= 39){
        cout << "C";
    }
    else{
        cout << "padhle bhai";
    }

}