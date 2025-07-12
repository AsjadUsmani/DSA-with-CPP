#include <iostream>
#include <vector>
#include <deque>
using namespace std;

// ✅ PAIR IN C++ STL
int main() {
    // ✅ pair<int, int> → holds two related values of any types
    pair<int, int> p1 = {3, 6};        // First: 3, Second: 6
    pair<int, string> p2 = {1, "Asjad"}; // First: 1, Second: Asjad

    // ✅ Accessing pair elements:
    // cout << p1.first << endl;  // prints 3
    // cout << p2.second << endl; // prints Asjad

    // ✅ Nested Pair (pair of pair)
    pair<int, pair<char, int>> p = {3, {'a', 7}};
    cout << p.second.first << endl;  // prints 'a'
    cout << p.second.second << endl; // prints 7
    cout << p.first << endl;         // prints 3

    // ❓ Why can't we use indexing like p[0]?
    // 🔸 Because `pair` is a class and doesn't support operator[].
    // 🔸 You must access using `.first` and `.second`.

    // ✅ VECTOR OF PAIRS:
    vector<pair<int, int>> vec = {
        {1, 2}, {3, 4}, {5, 6}, {7, 8}, {9, 10}
    };

    // ✅ Traversing vector of pairs:
    for (pair<int, int> val : vec) {
        cout << val.first << " " << val.second << endl;
    }

    // ✅ Add more pairs:
    vec.push_back({11, 12});     // push_back() needs { }
    vec.emplace_back(13, 14);    // emplace_back() is more efficient and cleaner

    return 0;
}
// ✅ pair<T1, T2> holds exactly 2 elements of any types.
// Access: .first and .second only, no indexing or iteration.
// Mostly used for coordinates, key-value pairs, sorting with position, etc.

// ✅ vector<pair<T1, T2>> is a dynamic array of pairs
// Access: you can use index + .first or .second → vec[i].first
// Supports all vector operations: push_back(), emplace_back(), size(), etc.
