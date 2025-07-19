#include<iostream>
#include<math.h> // for log10() function
using namespace std;

// Function to count digits using iteration
void countDigits(int n){
    int count = 0;

    // Loop runs until n becomes 0
    while(n != 0){
        int digit = n % 10; // get the last digit (not used here, but this line shows how we extract digits)
        count++;            // increment digit count
        n /= 10;            // remove the last digit from number
    }

    cout << "Digits: " << count << endl; // print the digit count
}

int main(){
    int n;

    // Take input from user
    cout << "Enter a Number: " << endl;
    cin >> n;

    // Method 1: Using loop
    countDigits(n);

    // Method 2: Using log10 formula
    // log10(n) gives the number of digits - 1, so we add 1 to get actual digits
    cout << "Digits: " << int(log10(n) + 1); // convert float to int using typecasting

    return 0;
}

/*
🎯 Goal: Count the number of digits in a given integer n.

📌 Method 1 - Using Loop
→ Repeatedly divide the number by 10
→ Increment count until number becomes 0
→ This works for all positive and negative integers

📌 Method 2 - Using log10()
→ Formula: int(log10(n) + 1)
→ Works only when n > 0
→ Fast, single-line method using math

🧠 Edge Case:
If n == 0, loop method gives 1 digit, but log10(0) is undefined (infinity) → will crash
👉 So use condition: if (n == 0) return 1; when using log10 method

🧮 Time Complexity:

Loop method: O(log₁₀n)

log10 method: O(1)

📦 Space Complexity:

Both use O(1) space
*/