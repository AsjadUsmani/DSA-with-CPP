#include <iostream>
#include <math.h>
using namespace std;

int bruteGCD(int num1, int num2)
{
    int gcd = 1;
    if (num1 == 0)
        gcd = num2;
    else if (num2 == 0)
        gcd = num1;
    else if (num1 == num2)
        gcd = num1;
    else
    {
        for (int i = 2; i <= min(num1, num2); i++)
        {
            if (num1 % i == 0 && num2 % i == 0){
                gcd = i;
            }
        }
    }
    return gcd;
}

// int euclidAlgo(int num1, int num2){
//     int maxNum;
//     if(num1 == 0) return num2;
//     else if(num2 == 0) return num1;
//     else {
//         maxNum = max(num1, num2);
//         if(num1 == maxNum){
//             euclidAlgo(num1 % num2, num2);
//         } else {
//             euclidAlgo(num1, num2 % num1);
//         }
//     }
// }
int euclidAlgo(int num1, int num2){
    if(num2 == 0) return num1;
    euclidAlgo(num2, num1 % num2);
}

int LCM(int num1, int num2){
    return (num1 * num2) / euclidAlgo(num1, num2);
}

int main()
{
    int num1, num2;
    cout << "Enter Numbers" << endl;
    cin >> num1;
    cin >> num2;
    int ans = bruteGCD(num1, num2);
    cout << "GCD: " << ans << endl;
    ans = euclidAlgo(num1, num2);
    cout << "GCD: " << ans << endl;
    ans = LCM(num1, num2);
    cout << "LCM: " << ans << endl;
}