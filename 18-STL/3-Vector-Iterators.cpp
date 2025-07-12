#include <iostream>
#include<vector>
using namespace std;

// ✅ Iterators in Vectors - Forward and Reverse Traversal
int main() {
    vector<int> vec = {1, 2, 3, 4, 5};

    // vec.begin() and vec.end() are iterators (like pointers)
    // vec.begin() → points to the first element (index 0)
    // vec.end() → points just AFTER the last element (index vec.size())
    // Important: vec.end() DOES NOT point to the last value, so dereferencing it (*vec.end()) gives garbage

    // Example:
    // cout << *(vec.begin()); // ✅ prints 1 (value at index 0)
    // cout << *(vec.end());   // ❌ gives garbage value or may crash (because it's past the last element)

    // Instead of writing: vector<int>::iterator it;
    // We can use auto keyword to let compiler automatically figure out the iterator type

    // ✅ FORWARD TRAVERSAL using normal iterator
    for(auto it = vec.begin(); it != vec.end(); it++) {
        cout << *it << " ";  // *it dereferences the iterator to get the value
    }
    cout << endl;

    // ✅ REVERSE TRAVERSAL using reverse iterator
    // vec.rbegin() → points to last element
    // vec.rend() → points BEFORE the first element
    // Reverse iterators internally move backward, so we still use it++ to go to the "previous" element in normal order
    for(auto it = vec.rbegin(); it != vec.rend(); it++) {
        cout << *it << " ";  // prints 5 4 3 2 1
    }
    cout << endl;

    return 0;
}

// 🔁 vec.begin() → start of vector
// 🔁 vec.end() → one position after the last element
// 🚫 *vec.end() is undefined (garbage or crash)

// 🔁 vec.rbegin() → starts from last element
// 🔁 vec.rend() → one position before first element

// ⚠️ Use it++ even in reverse iterators (vec.rbegin()) because reverse_iterator has ++ overloaded
// ✅ Always use auto keyword for cleaner and smarter iterator code
