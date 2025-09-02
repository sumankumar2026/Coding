// #include<iostream>
// using namespace std;
// int main(){

//     // int arr[10] = {1,2,3,4,5,67,8,9,10};
//     // cout << "Address of first memory block is: " << arr << endl;
//     // cout << arr[0] << endl;
//     // cout << "Address of first memory block is: " << &arr[0] << endl;
//     // cout <<"4th: " << *arr << endl;
//     // cout << "5th: " << *arr + 1 << endl;
//     // cout << "6th: " << *(arr + 1) << endl;

//     int arr[10] = {22,123,67,41};
//     cout << "4th: " << *arr << endl;
//     cout << "5th: " << *arr + 5 << endl;
//     cout << "6th: " << *(arr + 1) << endl;
//     cout << "7th: " << arr[3] << endl;
//     cout << "8th: " << *(arr) + 1 << endl;
//     cout << "9th: " << 2[arr] << endl;     // background = *(2 + arr)
//     return  0;
// }


#include<iostream>
using namespace std;
int main(){
int temp[10] = {1,5,8,6};
/*
cout << "Size of array: " << sizeof(temp) << endl;

int *ptr = &temp[0];
cout << "Size of pointer which is in pointer: " << sizeof(ptr) << endl;
*/

cout << &temp << endl;
cout << temp << endl;
cout << &temp[0] << endl;

int *ptr = temp;
cout << *ptr << endl;
cout << ptr<< endl;
// cout << &temp[0] << endl;
cout << &ptr << endl;
    return 0;
}

