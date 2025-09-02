#include <iostream>
using namespace std;
void reverseArr(int arr[], int n)
{
    int start = 0;
    int end = n - 1;
    while (start <= end)
    {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}
// Find the Maximum Element:
void maxiElement(int arr[], int n)
{
    int maxi = arr[0];
    for (int i = 0; i < n; i++)
    {
        if (maxi < arr[i])
        {
            maxi = arr[i];
        }
    }
    cout << "maximum number is: " << maxi << endl;
}

// sum of array
void sumOfArray(int arr[], int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum = sum + arr[i];
    }
    cout << sum << endl;
}

// Count Even and Odd Numbers
void countEvenOdd(int arr[], int n)
{
    int even = 0;
    int odd = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] % 2 == 0)
        {
            // even++;
            even = even + arr[i];
        }
        else
        {
            // odd++;
            odd = odd + arr[i];
        }
    }
    cout << "number of Even is: " << even << endl;
    cout << "number of Odd is: " << odd << endl;
}

// Linear Search And Frequency of Element
void findFrequencyAndLinear(int arr[], int n, int target)
{

    int frequency = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == target)
        {
            frequency++;
        }
    }

    if (frequency > 0)
    {
        cout << "Element " << target << " occurs " << frequency << " times in the array." << endl;
    }
    else
    {
        cout << "Element " << target << " is not present in the array." << endl;
    }
}

// Find Minimum Element in an Array
void minElement(int arr[], int n)
{
    int min = arr[0];
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }
    cout << "minimum Element is: " << min << endl;
}

// Array is sorted or not
bool sortArray(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    { // Loop till n - 1 to avoid out-of-bounds access
        if (arr[i] > arr[i + 1])
        {
            cout << " Not Sorted Array" << endl; // Print when array is not sorted
            return false;
        }
    }
    cout << "Sorted Array" << endl; // Print when array is sorted
    return true;
}

void averageSum(int arr[], int n)
{
    float sum = 0;
    float average = 0;
    for (int i = 0; i < n; i++)
    {
        sum = sum + arr[i];
        // average = sum / n;
    }
    average = (sum / n);
    cout << "Average of element: " << average << endl;
}

void swapElement(int arr[], int n)
{
    // int temp = arr[0];
    // arr[0] = arr[n - 1];  //both will work
    // arr[n - 1] = temp;

    swap(arr[0], arr[n - 1]); // this one is also.

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

// Count Positive and Negative Numbers:
void cntPosiNeg(int arr[], int n)
{
    int countPosi = 0, countNeg = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] >= 0)
        {
            countPosi++;
        }
        else if (arr[i] < 0)
        {
            countNeg++;
        }
    }
    cout << "Total number of Positive is: " << countPosi << endl;
    cout << "Total number of Negative is: " << countNeg << endl;
}

// Find the Product of Array Elements:
void productArray(int arr[], int n)
{
    int product = 1;
    for (int i = 0; i < n; i++)
    {
        product = product * arr[i];
    }
    cout << "Product of the element is: " << product << endl;
}

// Reverse Only Even Numbers in an Array

void reverseEvenEle(int arr[], int n)
{
    int start = 0, end = n - 1;

    while (start < end)
    {
        // Find the next even element from the left
        while (start < end && arr[start] % 2 != 0)
        {
            start++;
        }
        // Find the next even element from the right
        while (start < end && arr[end] % 2 != 0)
        {
            end--;
        }
        // Swap even elements
        if (start < end)
        {
            swap(arr[start], arr[end]);
            start++;
            end--;
        }
    }
    // Print the modified array
    cout << "Array after reversing even elements: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void PrintArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    int arr[] = {2, 3, 4, 5, 6};
    int n = sizeof(arr) / sizeof(arr[0]);
    // reverseArr(arr, n);
    PrintArray(arr, n);
    sumOfArray(arr, n);
    maxiElement(arr, n);
    countEvenOdd(arr, n);
    minElement(arr, n);
    findFrequencyAndLinear(arr, n, 10);
    sortArray(arr, n);
    averageSum(arr, n);
    swapElement(arr, n);
    cntPosiNeg(arr, n);
    productArray(arr, n);
    reverseEvenEle(arr, n);
    return 0;
}
