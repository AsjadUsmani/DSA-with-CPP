#include <iostream>
using namespace std;

bool powOfTwo(int num) {
    if (num > 0)
    {
         if((num & (num - 1)) == 0) {
            return true;
         }
    } 
    return false;
}

int main() {
    int n;
    cout << "Enter a num: " << endl;
    cin >> n;
    if(powOfTwo(n)) {
        cout << "Number is divisible by power of 2"; 
    } else{
        cout << "Number is not divisible by power of 2";
    }
    return 0;
}