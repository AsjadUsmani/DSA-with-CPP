#include<iostream>
using namespace std;

int main () {
    int i, j, n;
    cout << "Enter n: ";
    cin >> n;
    int a;
    for(i = 0; i < n; i++) {
        a = 1;
        for(j = n - (i + 1); j > 0; j--) {
            cout << " ";
        }
        for(j = 0; j <= i; j++) {
            cout << a;
            a++;
        }
        a--;
        for(j = 0; j < i; j++) {
            a--;
            cout << a;
        }
        cout << endl;
    }
    return 0;
}