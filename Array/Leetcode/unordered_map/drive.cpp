#include<iostream>
#include<cmath>
using namespace std;
int sumArr(int arr[],int n){
    int sum = 0;
    for(int i = 0; i < n ; i++){
        sum = sum + abs(arr[i]);   
    }
    return sum;
}

int main(){
    int arr[] = {-2,-9,7};
    int n = sizeof(arr)/sizeof(arr[0]);

    cout << "Sum of array is: " << sumArr(arr,n);
    return 0;
}