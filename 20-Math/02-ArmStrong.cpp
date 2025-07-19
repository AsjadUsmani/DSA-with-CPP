#include<iostream>
#include<math.h> // for log10()
using namespace std;

// Function to check if a number is an Armstrong number
int armstrong(int n, int totalDigits){
    int digit, sum = 0;

    // Loop through each digit
    while(n != 0){
        int product = 1;
        digit = n % 10; // Extract last digit

        // Multiply digit 'totalDigits' times (digit^totalDigits)
        // for(int i = 0; i < totalDigits; i++){
        //     product *= digit;
        // }

        // sum += product; // Add to sum
        sum += pow(digit, totalDigits); //Now, the power calculation becomes O(1) (constant time), thanks to internal optimizations (often using log-based exponentiation).
        // So the new time complexity becomes O(d), where d is the number of digits in the number.
        n /= 10;        // Remove last digit
    }

    return sum; // Return final calculated Armstrong sum
}

int main(){
    int n;
    cout << "Enter a number" << endl;
    cin >> n;

    // Calculate number of digits using log10
    int totalDigits = int(log10(n) + 1);

    // Call armstrong function to get sum of digits raised to totalDigits
    int armstrongNumber = armstrong(n, totalDigits);

    // Compare original number with the sum to check if Armstrong
    if(armstrongNumber == n){
        cout << "It is an Armstrong Number.";
    } else {
        cout << "It is not an Armstrong Number." << endl;
    }

    return 0;
}
/*
🎯 **Goal:** Check if a number is an Armstrong number.

🧠 **Armstrong Number:**  
A number is Armstrong if:  
sum of (each digit ^ total number of digits) == original number  
Example: 153 → 1³ + 5³ + 3³ = 153 ✅

🧮 **Steps:**  
1. Calculate number of digits using: `log10(n) + 1`
2. Loop through digits:
   - Extract digit using `% 10`
   - Raise it to the power of total digits (using loop)
   - Add to sum
3. Compare final sum with original number

⚙️ **Time Complexity:**  
- O(d²), where d = number of digits (due to nested loop for power)

📦 **Space Complexity:**  
- O(1)

⚠️ **Edge Case:**  
- If input is 0 or single digit → always Armstrong
*/
