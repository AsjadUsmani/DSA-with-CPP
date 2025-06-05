#include<iostream>
using namespace std;

int main () {
    int i, j, n;
    cout << "Enter n: ";
    cin >> n;
    char ch = 'A';
    for(i = 0; i < n; i++) {
        ch = 'A' + i;
        for(j = i + 1; j >= 1; j--) {
            cout << ch;
            ch--;
        }
        cout << endl;
    }
    return 0;
}
// int main () {
//     int i, j, n;
//     cout << "Enter n: ";
//     cin >> n;
//     int a = 1;
//     for(i = 0; i < n; i++) {
//         for(j = i + 1; j >= 1; j--) {
//             cout << j;
//         }
//         a++;
//         cout << endl;
//     }
//     return 0;
// }