#include<iostream>
using namespace std;

int main () {
    int i, j, n;
    cout << "Enter n: ";
    cin >> n;
    int a = 1;
    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            cout << a << " ";
            a++;
        }
        cout << endl;
    }
    return 0;
}