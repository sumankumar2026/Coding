//Linear Search
/*#include <iostream>
using namespace std;

bool LinearSearch(int arr[], int size, int key)
{

    for (int i = 0; i < size; i++)
    {
        if (key == arr[i])
            return true;        
    }
    return false;
}

int main()
{
    int arr[7] = {5, 6, 8, 7, 1, 2, 9};
    int key = 1;
    int size = sizeof(arr) / sizeof(arr[0]);
    bool ans = LinearSearch(arr, size, key);
    if (ans)
    {
        cout << "key is found" << endl;
    }
    else
    {
        cout << "key is not found" << endl;
    }
    return 0;
}
*/

//binary search...
#include<iostream>
using namespace std;

void BinarySearch(int arr[],int size,int key){
    int start = 0;
    int end = size-1;
    while(start <= end){
        int mid = (start+end)/2;
        if(arr[mid] == key){
            cout << "index at " << mid << endl;
            return;
        }
        else if(arr[mid] < key){
            start = mid+1;
    }
    else{
        end = mid-1;
    }
}
cout << "key is not found" << endl;
}
int main(){

    int arr[10] = {0,1,2,3,3,4,5,6,6,8};
    int size = sizeof(arr)/sizeof(arr[0]);
    int key = 8;
    BinarySearch(arr,size,key);


    return 0;
}