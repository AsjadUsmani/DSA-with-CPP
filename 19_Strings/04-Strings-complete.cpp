#include <iostream>
#include <string>
#include <algorithm> // for reverse, sort, etc.
using namespace std;

int main() {
    // 🎯 Creating strings
    string s1 = "Asjad";
    string s2("Usmani");
    string s3 = s1 + " " + s2; // Concatenation

    cout << "1. Concatenated String: " << s3 << endl;

    // 🔁 Length / Size
    cout << "2. Length: " << s3.length() << endl;
    cout << "3. Size: " << s3.size() << endl;

    // ✅ Character access
    cout << "4. First character: " << s3[0] << endl;
    cout << "5. Last character: " << s3[s3.length() - 1] << endl;

    // 🧪 Comparing strings
    string a = "abc";
    string b = "abc";
    if (a == b) cout << "6. Strings are equal" << endl;

    // 🔁 Substrings
    string str = "LeetCode";
    cout << "7. Substring from index 0, length 4: " << str.substr(0, 4) << endl;

    // 🔎 Searching
    cout << "8. Index of 'Code' in str: " << str.find("Code") << endl;
    cout << "9. Index of 'Algo': " << str.find("Algo") << endl; // returns npos if not found

    // 🧼 Insert, Erase, Replace
    string modify = "HelloWorld";
    modify.insert(5, " "); // Add space after Hello
    cout << "10. Insert space: " << modify << endl;

    modify.erase(5, 1); // Erase the space
    cout << "11. After erasing space: " << modify << endl;

    modify.replace(5, 5, " Everyone"); // Replace 'World' with ' Everyone'
    cout << "12. After replace: " << modify << endl;

    // 🔁 Reverse
    string rev = "madam";
    reverse(rev.begin(), rev.end());
    cout << "13. Reversed: " << rev << endl;

    // 🔤 Sort string
    string unsorted = "dcbae";
    sort(unsorted.begin(), unsorted.end());
    cout << "14. Sorted string: " << unsorted << endl;

    // 🧮 stoi and to_string
    string numStr = "1234";
    int num = stoi(numStr);
    cout << "15. String to int: " << num << " + 1 = " << num + 1 << endl;

    int x = 567;
    string xStr = to_string(x);
    cout << "16. Int to string: " << xStr + "abc" << endl;

    return 0;
}

/*
1. Concatenated String: Asjad Usmani
2. Length: 12
3. Size: 12
4. First character: A
5. Last character: i
6. Strings are equal
7. Substring from index 0, length 4: Leet
8. Index of 'Code' in str: 4
9. Index of 'Algo': 18446744073709551615 (string::npos)
10. Insert space: Hello World
11. After erasing space: HelloWorld
12. After replace: Hello Everyone
13. Reversed: madam
14. Sorted string: abcde
15. String to int: 1234 + 1 = 1235
16. Int to string: 567abc

*/

/*
// ✅ String in C++
// - string s = "Hello"; // Declaration
// - s.length() or s.size(); // Length of string
// - s[i]; // Access ith char
// - s + s2; // Concatenate
// - s.substr(start, len); // Substring
// - s.find("text"); // Search text
// - s.insert(pos, "text"); // Insert
// - s.erase(pos, len); // Erase characters
// - s.replace(pos, len, "new"); // Replace
// - reverse(s.begin(), s.end()); // Reverse
// - sort(s.begin(), s.end()); // Sort chars
// - stoi("123") → int, to_string(456) → "456"

// 🧠 Time Complexities:
// - Access char: O(1)
// - Reverse/sort: O(n log n)
// - Insert/erase: O(n)
// - Substring/find: O(n)

// 🌟 Note: Strings are mutable and dynamic in C++

*/