//prime number
#include<iostream>
using namespace std;

bool primeChecker(int n){
    if(n % 2 != 0 ){
        return true;      
    }
    return false;
}

int main(){
    int n;
    cout << "Enter number: ";
    cin >> n;
    if(primeChecker(n)){
        cout << n << " is the prime number" << endl;
    }
    else{
        cout << n << " is not the prime number" << endl;
    }
    return 0;
}