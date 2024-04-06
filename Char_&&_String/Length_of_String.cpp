#include<iostream>
#include<string.h>
using namespace std;

int findLength(char ch[], int size){
    int length = 0;

    for(int i=0; i<size; i++){
        if(ch[i] == '\0'){
            break;
        }
        else{
            length++;
        }
    }
 
    // Using while Loop
    int i=0;
    while(ch[i] != '\0'){
        length++;
        i++;
    }
    return length;

    // int i=0;
    // while(i<size){
    //     if(ch[i] == '\0'){
    //         break;
    //     }
    //     else{
    //         length++;
    //         i++;
    //     }
    // }
}

int main(){

    char ch[100];
    cin >> ch;

    int len = findLength(ch, 100);
    cout  << "Length of the String is: " << len << endl;
    // Print length using InBuild function
    cout << "Printing Length: " << strlen(ch) << endl;

    return 0;
}