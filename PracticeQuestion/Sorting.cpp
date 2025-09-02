//bubble sort..
#include<iostream>
using namespace std;

void bubbleSort(int arr[],int size){
    for(int i=0;i<=size-1;i++){
        for(int j = 0;j <= size-1;j++){
            if(arr[j] > arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }
}
int main(){

    int arr[10] = {1,6,8,7,2,3,5,12,-5,-1};
    int size = sizeof(arr)/sizeof(arr[0]);
    bubbleSort(arr,size);
    for(int i = 0;i<size;i++){  //for printing the array
        cout << arr[i] << " ";
    }

    return 0;
}