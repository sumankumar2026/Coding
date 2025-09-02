#include<iostream>
using namespace std;

void sumRow(int arr[][4], int row, int col) {
    for (int i = 0; i < row; i++) {
        int sum = 0;
        for (int j = 0; j < col; j++) {
            sum += arr[i][j];
        }
        cout << "Sum of row " << i + 1 << ": " << sum << endl;
    }
}

int main() {
    int arr[3][4];
    cout << "Enter the 2D Array:" << endl;

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            cin >> arr[i][j];
        }
    }

    sumRow(arr, 3, 4);

    return 0;
}
