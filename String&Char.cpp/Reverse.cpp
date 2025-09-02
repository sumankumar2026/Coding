#include<iostream>
using namespace std;
int lengthStr(char name[]){
    int count = 0;
    for(int i = 0; name[i] != '\0';i++){
        count++;
    }
    return count;
}
void reverseStr(char ch[],int size){
    int start = 0;
    int end = size-1;
    while(start < end){
        swap(ch[start++],ch[end--]);
    }
}
int main(){
    char name[12];
    cout << "Enter name: ";
    cin >> name;
    cout << "Your name: " << name << endl;
    int len = lengthStr(name);
    cout <<"Length of string is " << len << endl;
    cout << " Reverse String: " ;
    reverseStr(name,len);
    cout << name << endl;
    return 0;
}