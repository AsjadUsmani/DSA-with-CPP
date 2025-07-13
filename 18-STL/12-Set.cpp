#include <iostream>
#include <set>        // ✅ Required for set
#include <vector>     // ✅ For using vector
#include <algorithm>  // ✅ For sort(), lower_bound(), upper_bound()
using namespace std;

// ✅✅✅ STL Set in C++
// ➤ Set stores **unique** elements in **sorted order (ascending)** by default.
// ➤ It uses a self-balancing Binary Search Tree (Red-Black Tree).

int main() {
    set<int> s; // ✅ Declaration of a set

    // 🔹 Insert elements (Duplicates will be ignored automatically)
    s.insert(2);
    s.insert(3);
    s.insert(4);
    s.insert(7);
    s.insert(5);
    s.insert(6);
    s.insert(2); // Duplicate, will not be added
    s.insert(3);
    s.insert(4);

    // 🔹 Print the set (sorted, unique elements)
    cout << "Set Elements: ";
    for (auto val : s) {
        cout << val << " ";  // Output: 2 3 4 5 6 7
    }
    cout << endl;

    // 🔹 lower_bound(): returns iterator to the **first element >= given value**
    auto it1 = s.lower_bound(4); // points to 4
    if (it1 != s.end())
        cout << "Lower Bound of 4: " << *it1 << endl;

    // 🔹 upper_bound(): returns iterator to the **first element > given value**
    auto it2 = s.upper_bound(4); // points to 5
    if (it2 != s.end())
        cout << "Upper Bound of 4: " << *it2 << endl;

    // 🔹 Vector descending sort using custom comparator
    vector<int> vec = {2, 3, 6, 4, 5};
    sort(vec.begin(), vec.end(), greater<int>()); // sorts in descending order

    cout << "Sorted Vector (Descending): ";
    for (int val : vec) {
        cout << val << " ";  // Output: 6 5 4 3 2
    }
    cout << endl;

    return 0;
}

// 🔸 set<int> s;
//     - Stores unique elements in **sorted ascending order** by default
//     - Internally uses Red-Black Tree → All operations in O(log n)

// 🔸 s.insert(val) → inserts val if not already present

// 🔸 s.find(val) → returns iterator to val or s.end() if not found

// 🔸 s.lower_bound(x) → iterator to first element >= x

// 🔸 s.upper_bound(x) → iterator to first element > x

// 🔸 s.erase(x) → deletes element with value x

// 🔸 s.clear() → removes all elements

// 🔸 s.size() → returns number of elements
