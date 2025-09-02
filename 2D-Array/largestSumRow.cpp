#include <iostream>
#include <climits> // Include for INT_MIN
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

int larSumRow(int arr[][4], int row, int col) {
    int maxi = INT_MIN; // Initialize to minimum possible value
    int rowIndex = -1;
    for (int i = 0; i < row; i++) {
        int sum = 0;
        for (int j = 0; j < col; j++) {
            sum += arr[i][j];
        }
        if (sum > maxi) {
            maxi = sum;
            rowIndex = i;
        }
    }
    cout << "Maximum sum row index is: " << rowIndex + 1 << endl;
    return maxi;
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
    cout << "Max row sum in array: " << larSumRow(arr, 3, 4) << endl;

    return 0;
}
