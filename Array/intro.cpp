// #include <iostream>
// using namespace std;
// int main()
// {
//     int nums[] = {1,9,5,689,5,6,562,6,69,3,56,};
//     int size = sizeof(nums) / sizeof(nums[0]);
//     int maxi = nums[0];
//     int mini = nums[0];
//     for (int i = 0; i < size; i++)
//     {
//         if (nums[i] > maxi)
//         {
//             maxi = nums[i];
//         }
//         if (nums[i] < mini)
//         {
//             mini = nums[i];
//         }
//     }
//     cout << "maximum number is: " << maxi << endl;
//     cout << "minimum number is: " << mini << endl;
//     // int sum = 0;
//     // int oddCount = 0;
//     // int evenCount = 0;
//     // for (int i = 0; i < size; i++)
//     // {
//     //     if (nums[i] % 2 == 0)
//     //     {
//     //         evenCount++;
//     //     }
//     //     else
//     //     {
//     //         oddCount++;
//     //     }
//     // }
//     // cout << "Counting of Odd number is: " << oddCount << endl;
//     // cout << "counting of even number is: " << evenCount << endl;
//     // Reverse an Array:
// }

#include <iostream>
using namespace std;
int main()
{
    int nums[] = {5, 6, 3, 2, 45, 5, 6, 3, 2};
    int size = sizeof(nums) / sizeof(nums[0]);
    for (int i = 0; i < size; i++)
    {
        cout << nums[i] << " ";
    }
    cout << endl;

    // reversing array
    for (int i = 0; i < size / 2; i++)
    {
        int temp = nums[i];
        nums[i] = nums[size - i - 1];
        nums[size - i - 1] = temp;
    }

    cout << "reverse array is here: ";
    for (int i = 0; i < size; i++)
    {
        cout << nums[i] <<" ";
    }
    return 0;
}