//sum of numbers from 1 to n which are divisible by 3.

/*
#include<iostream>
using namespace std;

int main () {
    int n, i, sum = 0;
    cout << "Enter number n: "<< endl;
    cin >> n;
    for(i = 1; i <= n; i++) {
        if(i % 3 == 0) {
            sum += i;
        }
    }
    cout << "sum is: " << sum;
    return 0;
}
*/

#include<iostream>
using namespace std;

int main () {
    int i, f = 1, n;
    cout << "Enter number to calculate factorial: " << endl;
    cin >> n;
    for(i = 1; i <= n; i++) {
        f *= i;
    }
    cout << "Factorial of n is: " << f << endl;
    return 0;
}