#include<iostream>
using namespace std;

int removeDuplicate(int arr[],int size){
    int uniqueIndex = 0;
    for(int i = 0; i < size;i++){
        if(arr[i] != arr[uniqueIndex]){
            uniqueIndex++;
            arr[uniqueIndex] = arr[i];
        }
    }
    return uniqueIndex + 1;
}

int main(){
    int arr[] = {1,1,2,3,3,4,5,5,6,6,7};
    int size = sizeof(arr)/sizeof(arr[0]);

    int newSize = removeDuplicate(arr,size);
    cout << "After removing duplicate from array: ";

    for(int i = 0; i < newSize;i++){
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}