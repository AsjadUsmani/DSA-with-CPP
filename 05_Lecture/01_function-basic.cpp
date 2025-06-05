#include<iostream>
using namespace std;

int sum(int a, int b) {
    int sum = a + b;
    return sum;
}
int diff(int a, int b) {
    int diff = a - b;
    return diff;
}
//min of 2 numbers:
int minOfTwo(int a, int b) {
    if(a < b) {
        return a;
    } else {
        return b;
    }
}

//sum of numbers from 1 to N
int sumOfNNumbers(int n) {
    int sum = 0;
    for(int i = 1; i <= n; i++) {
        sum += i;
    }
    return sum;
}

//factorial
int factorial(int n) {
    int fact = 1;
    for(int i = 2; i <= n; i++) {
        fact *= i;
    }
    return fact;
}

//sum of digits of a number.
int sumOfDigits(int n){
    int sum = 0;
    while (n != 0) {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

int nCr(int n, int r) {
    int nCr;
    int nFact = factorial(n);
    int rFact = factorial(r);
    int nrFact = factorial(n - r);
    nCr = nFact / (rFact * nrFact);
}

int main () {
    cout << sum(10, 20) << endl;
    cout << diff(10, 20) << endl;
    cout << minOfTwo(2, 8) << endl;
    cout << sumOfNNumbers(5) << endl;
    cout << factorial(5) << endl;
    cout << sumOfDigits(1124) << endl;
    cout << nCr(5, 2) << endl;
    return 0;
}


//pass by value
//functions in memory(call stack and heap memory)