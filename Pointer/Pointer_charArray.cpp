/*
#include<iostream>
using namespace std;
int main(){

    // int num[5] = {1,2,3,4,5};
    char ch[6] = "abcde";

    // cout << num << endl;
    cout << ch << endl;

    char *ch1 = &ch[0];
    cout << ch1 << endl;

    char temp = 'z';
    char *ch3 = &temp;

    cout << ch3 << endl;

    return 0;
}
*/

#include <iostream>
using namespace std;

void update(int *ptr)
{
    // ptr = ptr + 1;
    *ptr = *ptr + 1;
    // cout << "Inside the function: " << ptr << endl;
}

int getSum(int *arr,int n){  //instead of arr[].
    cout << "Size is: " << sizeof(arr) << endl;
    int sum = 0;
    for(int i = 0;i< n;i++){
        sum = sum + arr[i];
    }
    return sum;
}

int main()
{

    /*int num = 5;
    int *ptr = &num;
    // cout << "Before update: " << ptr << endl;
    cout << "Before update: " << *ptr << endl;
    update(ptr);

    // cout << "After update: " << ptr << endl;
    cout << "After update: " << *ptr << endl;*/


    int num[6] = {1,2,3,4,5,8};

    int ans = getSum(num+3,3);
    cout << "Answer is here: " << ans <<endl;

    return 0;
}