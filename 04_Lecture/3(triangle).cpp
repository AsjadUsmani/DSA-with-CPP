#include<iostream>
using namespace std;

// int main () {
//     int i, j, n;
//     cout << "Enter n: ";
//     cin >> n;
//     for(i = 0; i < n; i++) {
//         for(j = 0; j <= i; j++) {
//             cout << "*";
//         }
//         cout << endl;
//     }
//     return 0;
// }

// 1
// 22
// 333
// 4444
// 55555

int main () {
    int i, j, n;
    cout << "Enter n: ";
    cin >> n;
    int a = 1;
    for(i = 0; i < n; i++) {
        for(j = 0; j <= i; j++) {
            cout << a;
        }
        a++;
        cout << endl;
    }
    return 0;
}