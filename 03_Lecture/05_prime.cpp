#include<iostream>
using namespace std;

int main() {
    int n;
    bool isPrime = true;
    cout << "Enter n: ";
    cin >> n;
    for(int i = 2; i < n; i++) {
        if (n % i == 0){//non-prime
            isPrime = false;
            break;
        }
    }
    if(isPrime) {
        cout << "Prime number.";
    } else {
        cout << "Not a Prime number.";
    }
    return 0;
}