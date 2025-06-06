#include <iostream>
#include<math.h>
using namespace std;

//decimal to binary.
int decToBin(int num) {
    int binaryNum = 0;
    int rem = 0;
    int pow = 1;
    while(num > 0) {
        rem = num % 2;
        num /= 2;
        binaryNum += (rem * pow);
        pow *= 10;
    }
    return binaryNum;
}

//Binary to Decimal.
int binToDec(int num) {
    int res = 0; 
    int rem;
    int pow = 1;
    while (num > 0) {
        rem = num % 10;
        res += rem * pow;
        num /= 10;
        pow *= 2;
    }
    return res;
}

// 2's Complement of a binary number
int secondComp(int num) {
    int pow = 1, oneComp = 0, rem;

    // Step 1: Calculate 1's complement
    while(num > 0){
        rem = num % 10;

        if(rem == 0) rem = 1;
        else rem = 0;

        oneComp += (rem * pow);
        pow *= 10;
        num /= 10;
    }

    // Step 2: Add 1 to 1's complement
    int twoComp = 0;
    int carry = 1;
    pow = 1;

    while(oneComp > 0 || carry > 0) {
        rem = oneComp % 10;
        int sum = rem + carry;
        twoComp += (sum % 2) * pow;
        carry = sum / 2;
        oneComp /= 10;
        pow *= 10;
    }

    return twoComp;
}


int main() {
    int n;
    cout << "Enter number: ";
    cin >> n;
    cout<< endl;
    // cout << "Your Binary conversion is: " << decToBin(n) << endl;
    // cout << "Your Decimal conversion is: " << binToDec(decToBin(n)) << endl;
    cout << secondComp(n);
    return 0;
}