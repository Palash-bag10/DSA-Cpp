#include<iostream>
#include<string.h>
using namespace std;

void convertToUpperCase(char ch[], int n){
    int i=0;
    while(ch[i] != '\0'){
        char currCharacter = ch[i];
        if(currCharacter >= 'a' && currCharacter <= 'z'){
            ch[i] = currCharacter - 'a' + 'A';
        }
        i++;
    }
}

int main(){

    char ch[100];
    cin.getline(ch, 100);

    convertToUpperCase(ch, 100);
    cout << ch << endl;

    return 0;
}