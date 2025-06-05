#include<iostream>
using namespace std;

// int main() {
//     int n, i, j;
//     cout << "Enter number of lines:";
//     cin >> n;
//     for (i = 1; i <= n; i++){
//         for(j = 1; j <= n; j++) {
//             cout << j;
//         }
//         cout << endl;
//     }
//     return 0;
// }

int main() {
    int n, i, j;
    char ch;
    cout << "Enter number of lines:";
    cin >> n;
    for (i = 0; i < n; i++) {
        ch = 'A';
        for(j = 0; j < n; j++) {
            cout << ch;
            ch++;
        }
        cout << endl;
    }
    return 0;
}