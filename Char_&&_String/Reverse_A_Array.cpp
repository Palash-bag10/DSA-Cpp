#include<iostream>
#include<string.h>
using namespace std;

int findLength(char ch[], int size){
    int i=0;
    while(ch[i] != '\0'){
        i++;
    }
    return i;
}

int reverseString(char ch[], int n){
    int i=0;
    int j=n-1;
    while(i<=j){
        swap(ch[i], ch[j]);
        i++;
        j--;
    }
}

int main(){

    char ch[100];
    cin >> ch;

    int len = findLength(ch,100);
    reverseString(ch, len);
    cout << "Reverse: " << ch << endl;

    return 0;
}