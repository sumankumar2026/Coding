#include<iostream>
#include<string.h>
using namespace std;
/*
// Q1. Print the length of a string.

int main(){
string str;
cout << "Enter the String: ";
// cin >> str;
getline(cin,str);
cout << "String is: " << str << endl;
cout << "Length of the string is: " << str.length();
    return 0;
}
    */

/*
    // Q2. Print each character of a string on a new line.

int main(){
    string str;
    cout << "Enter the String: ";
    getline(cin,str);
    for(int i = 0; i < str.length();i++){
        cout << str[i] << endl;
    }
}
    */

//  Q3. Reverse a string manually.
/*
int main(){
string str;
cout << "Enter the String: ";
cin >> str;
cout << "Reverse String: ";
for(int i = str.length()-1; i >=0; i--){
    cout << str[i];
}
return 0;
}*/

/*
//2nd method

int main(){
string str;
cout << "Enter the String: ";
cin >> str;
int start = 0; int end = str.length() - 1;
while(start < end){
    swap(str[start],str[end]);
    start++;
    end--;
}
cout << "Reverse String: " << str << endl;

    return 0;
}
    */

/*
// Q5. Count vowels in a string.
int main(){
int count = 0;
string str;
cout << "Enter String: ";
getline(cin,str);

for(int i = 0; i < str.length()-1;i++){
    if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' || str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U') {
        count++;
    }
}
cout << "Total  number of vowel in string is: " << count << endl;

}
*/
/*
// Q6. Convert a string to uppercase/lowercase.

int main(){
    string str;
    cout << "Enter the String: ";
    getline(cin,str);

    for(int i = 0; i < str.length(); i++){
        if(str[i] >= 'a' && str[i] <= 'z'){
            str[i] = str[i] - 32;

        }
    }
    cout << " Upper String is: " << str;

}
    */

   // Q7. Find the first non-repeating character in a string.

/*
//    Q7. Count number of words in a sentence.

int main(){
    int cnt = 0;
string str;
cout << "Enter the String: ";
cin >> str;
for(int i = 0; i < str.length(); i++){
    cnt++;
}
cout <<"Count of word is : " <<  cnt ;
    return 0;
}
    */
/*
// Q8. Replace all spaces in a string with hyphens.
int main(){
    string str;
    cout << "Enter the String: ";
    getline(cin,str);
    for(int i = 0; i < str.length(); i++){
        if(str[i] == ' ')
        str[i] = '-';
    }
    cout << "String after replacing spaces with hyphens: " << str;
}
    */
/*
    // Q9. Find the first and last character of a string.

    int main(){
        string str;
        cout << "Enter String: " ;
        getline(cin,str);
        cout << "First character is: " << str[0] << endl;
        cout << "Last character is: " << str[str.length()-1] ;

        return 0;
    }
*/
    