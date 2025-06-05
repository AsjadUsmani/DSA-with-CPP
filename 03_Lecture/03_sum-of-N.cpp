#include <iostream>
using namespace std;

int main () {
    int n, sum = 0;
    cout << "Enter n: " << endl;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        sum += i;
    }
    cout << "Sum of first " << n << " term is: " << sum << endl;
    return 0;
}