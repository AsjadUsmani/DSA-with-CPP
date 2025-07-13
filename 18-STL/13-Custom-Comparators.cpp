#include <iostream>
#include <vector>     // ✅ For using vector
#include <algorithm>  // ✅ For sort(), max_element(), min_element(), etc.
using namespace std;

// ✅ Custom Comparator Function
// Comparator is a function that takes two objects (like two pairs) and returns a boolean.
// ➤ Used to define custom sorting logic in sort() or other STL algorithms.

// 🔽 This comparator sorts pairs by their second value (ascending)
bool comparator(pair<int, int> p1, pair<int, int> p2) {
    return p1.second < p2.second;  // ascending order by second
    // You can also do multi-level comparison:
    // if(p1.second == p2.second) return p1.first < p2.first;
}

int main() {
    // 🧱 Vector of pairs
    vector<pair<int, int>> vec = {{2, 3}, {1, 4}, {3, 10}, {8, 1}};

    // 🧠 sort(vec.begin(), vec.end(), comparator)
    // ➤ Uses your custom comparator logic for sorting
    // ➤ Behind the scenes: repeatedly compares two elements using your function
    sort(vec.begin(), vec.end(), comparator);

    // 🔁 Print sorted pairs
    cout << "Sorted Pairs (by second element):" << endl;
    for (pair<int, int> val : vec) {
        cout << val.first << " " << val.second << endl;
    }

    // 📦 Other STL functions:
    vector<int> vec2 = {4, 2, 9, 6, 10, 3};

    // ✅ max_element → returns iterator to the maximum element
    cout << "Max Element of vec2: " << *(max_element(vec2.begin(), vec2.end())) << endl;

    // ✅ min_element → returns iterator to the minimum element
    cout << "Min Element of vec2: " << *(min_element(vec2.begin(), vec2.end())) << endl;

    // ✅ reverse() → reverses the vector in-place
    reverse(vec2.begin(), vec2.end());
    cout << "Reversed vec2: ";
    for (int val : vec2) cout << val << " ";
    cout << endl;

    // ✅ next_permutation → gives the next lexicographical permutation
    // (works on sorted data mostly)
    sort(vec2.begin(), vec2.end());
    next_permutation(vec2.begin(), vec2.end());
    cout << "Next Permutation: ";
    for (int val : vec2) cout << val << " ";
    cout << endl;

    // ✅ swap(a, b) → swaps two values
    int a = 10, b = 20;
    swap(a, b);
    cout << "After swap: a = " << a << ", b = " << b << endl;

    // ✅ __builtin_popcount() → counts set bits (1s) in binary representation
    cout << "__builtin_popcount(15): " << __builtin_popcount(15) << endl; // Output: 4 (1111)

    // ✅ binary_search() → checks if an element exists in a sorted array
    sort(vec2.begin(), vec2.end()); // binary_search works on sorted data
    cout << "Is 6 in vec2? " << binary_search(vec2.begin(), vec2.end(), 6) << endl;

    return 0;
}
// 📌 What is a Comparator?
// Comparator is a boolean function that defines custom rules for comparing two elements.
// It is used inside algorithms like sort(), priority_queue, etc.

// 🔸 sort(vec.begin(), vec.end(), comparator);
// Comparator function decides the order by returning true or false
// If comparator(p1, p2) returns true → p1 comes before p2
// Comparator must take **two objects of same type** and return bool

// 💡 STL Utility Functions:
// 🔹 sort()             → O(n log n)
// 🔹 max_element()      → O(n)
// 🔹 min_element()      → O(n)
// 🔹 reverse()          → O(n)
// 🔹 next_permutation() → O(n)
// 🔹 swap()             → O(1)
// 🔹 __builtin_popcount(x) → O(1), fast bit count (GCC built-in)
// 🔹 binary_search()    → O(log n), works on sorted containers
