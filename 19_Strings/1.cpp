#include<iostream>     // ✅ Required for input/output operations
#include<cstring>      // ✅ Required for C-style string functions like strlen, strcpy, etc.

using namespace std;

int main() {
    // ✅ Taking input in C-style strings (character array)
    char str[100]; // Declares a character array that can store up to 99 characters + '\0'

    // ❌ cin >> str;  // Only takes input till the first whitespace (space/tab/newline), so it's not suitable for full sentences.

    // ✅ Better method to take input with spaces:
    // cin.getline(str, 100); 
    // ➤ Takes input of up to 100 characters (including '\0') until it encounters a newline '\n'

    // ✅ Using custom delimiter with cin.getline()
    cin.getline(str, 100, '.'); 
    // ➤ Reads input until '.' is found (the third parameter is delimiter)
    // Example Input: Hello Asjad Usmani How are you hope you are doing well. okay?
    // Output stored in str: "Hello Asjad Usmani How are you hope you are doing well"

    cout << "Output: " << str << endl;

    return 0;
}
