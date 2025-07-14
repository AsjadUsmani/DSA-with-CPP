#include<iostream>     // ✅ For input/output
#include<string>       // ✅ For using C++ string class
#include<algorithm>    // ✅ For using reverse() and other STL algorithms

using namespace std;

int main() {
    string name = "Asjad Usmani"; 
    
    // ✅ Strings in C++ (std::string) are dynamic in nature:
    // ➤ Can grow/shrink in size at runtime
    // ➤ Unlike char arrays, which are fixed in size
    
    string str; // Empty string to be filled from user input

    cout << name << endl; // Output: Asjad Usmani

    // 🔄 Uncomment and assign new value to string:
    // name = "Aryaan";
    // cout << name << endl; // Output: Aryaan

    // ❌ Wrong: Comparing string literals directly like this doesn't work in C++
    // cout << ("Asjad" == "Usmani") << endl; // Always returns false due to pointer comparison

    // ✅ Accepting full line input using getline (includes spaces):
    getline(cin, str); 
    // Example Input: Hello Asjad Usmani

    // 🔁 Reverse a string using STL reverse()
    reverse(str.begin(), str.end());

    cout << "Reverse String: " << str << endl;

    return 0;
}
// ✅ Difference between C++ string and C-style char array:
// ➤ C++ string (std::string) is dynamic, supports rich features.
// ➤ char array is static, fixed size, and harder to manipulate.

// ✅ getline(cin, str):
// ➤ Reads full line including spaces until newline.
// ➤ Useful for names, sentences, etc.

// ✅ reverse(str.begin(), str.end()):
// ➤ Reverses string in-place using STL algorithm.
// ➤ Needs: #include<algorithm>

// ❌ Never compare string literals using "==", use:
// ➤ string a = "hello", b = "hello";
// ➤ if (a == b) → ✅ Works correctly for content comparison

// 🧠 STL String functions to explore more:
// ➤ str.length(), str.substr(), str.find(), str.erase(), str.insert(), str.replace()
