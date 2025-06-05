#include<iostream>
using namespace std;

int main() {
    int ch = 'A';//a - z
    if (ch >= 65 && ch <= 90) {
        cout << "Uppercase Character";
    }
    else if (ch >= 97 && ch <= 122) {
        cout << "Lowercase character";
    } else {
        cout << "Not a character";
    }
    return 0;
}