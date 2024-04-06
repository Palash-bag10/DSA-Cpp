#include<iostream>
using namespace std;

int main(){
    // Creation
    char ch[10];

    // input
    cin >> ch;

    // Read Whole Line
    cin.getline(ch, 100);

    // Print
    cout << ch << endl;

    // Print Using loop
    for(int i=0; i<10; i++){
        cout << "At Index: " << i << " " << ch[i] << endl;
    }

    // Verfy the NULL CHAR
    char temp = ch[6];
    int value = int(temp);
    cout << "Printing Integer Value: " << value << endl;

    return 0;
}