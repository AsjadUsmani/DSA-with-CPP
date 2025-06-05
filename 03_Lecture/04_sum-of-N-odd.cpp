#include <iostream>
using namespace std;

int main () {
    int n, sum = 0;
    cout << "enter n: " << endl;
    cin >> n;
    for(int i = 1; i <= n; i += 2) {
        sum += i;
    }
    cout << "Sum of ODD number is: "<< endl;
    cout << sum;
    return 0;
}