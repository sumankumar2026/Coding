#include <iostream>
#include <string>
using namespace std;

char getMaxOcc(string s)
{
    int count[26] = {0};
    for (int i = 0; i < s.length(); i++)
    {
        char ch = tolower(s[i]); // Convert the character to lowercase
        count[ch - 'a']++;      // Increment the count for the corresponding lowercase letter
    }
    
    int maxi = -1, ans = 0;
    for (int i = 0; i < 26; i++)
    {
        if (count[i] > maxi)
        {
            ans = i;
            maxi = count[i];
        }
    }
    return 'a' + ans; // Return the character with the maximum occurrence
}

int main()
{
    string s;
    cout << "Enter Word: ";
    cin >> s;
    cout << getMaxOcc(s) << endl;
    return 0;
}
