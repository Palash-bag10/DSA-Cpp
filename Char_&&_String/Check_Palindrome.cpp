#include<iostream>
#include<string.h>
using namespace std;

int findLength(char ch[], int n){
    int length = 0;
    int i = 0;

    while(ch[i] != '\0'){
        length++;
        i++;
    }
    return length;
}

bool checkPalindrome(char ch[], int n){
    int i=0, j=n-1;

    while(i<=j){
        if(ch[i] == ch[j]){
            i++;
            j--;
        }
        else{
            return false;
        }
    }
    return true;
}

int main(){
    char ch[100];
    cin.getline(ch, 100);
    int len = findLength(ch, 100);
    bool isPalindrome = checkPalindrome(ch, len);

    if(isPalindrome){
        cout << "Valid Palindrome" << endl;
    }
    else{
        cout << "Invalid Palindrome" << endl;
    }
}