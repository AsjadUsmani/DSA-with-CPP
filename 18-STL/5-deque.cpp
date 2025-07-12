#include <iostream>
#include <deque>
using namespace std;

// ✅ DEQUE IN C++ STL - Double Ended Queue (Fast Insert/Erase at both ends)
// Use deque when you need to push/pop from both front and back

int main() {
    deque<int> dq;

    // ✅ push_back(val) → add element to end
    dq.push_back(10); // Deque: 10

    // ✅ push_front(val) → add element to front
    dq.push_front(5); // Deque: 5 10

    // ✅ emplace_back(val) → optimized push_back
    dq.emplace_back(20); // Deque: 5 10 20

    // ✅ emplace_front(val) → optimized push_front
    dq.emplace_front(1); // Deque: 1 5 10 20

    // ✅ front() → get first element
    cout << "Front: " << dq.front() << endl; // Output: 1

    // ✅ back() → get last element
    cout << "Back: " << dq.back() << endl;   // Output: 20

    // ✅ pop_back() → remove last element
    dq.pop_back(); // Deque: 1 5 10

    // ✅ pop_front() → remove first element
    dq.pop_front(); // Deque: 5 10

    // ✅ insert() → insert before iterator position
    auto it = dq.begin(); // points to 5
    dq.insert(it, 100);   // Deque: 100 5 10

    // ✅ erase() → remove element at iterator
    it = dq.begin();      // points to 100
    dq.erase(it);         // Deque: 5 10

    // ✅ size() → number of elements
    cout << "Size of deque: " << dq.size() << endl; // Output: 2

    // ✅ clear() → remove all elements
    dq.clear(); // Deque is now empty

    // ✅ Add new values for traversal example
    dq.push_back(11);
    dq.push_back(22);
    dq.push_back(33);

    // ✅ FORWARD TRAVERSAL
    cout << "Forward: ";
    for (auto it = dq.begin(); it != dq.end(); it++) {
        cout << *it << " ";
    }
    cout << endl;

    // ✅ REVERSE TRAVERSAL
    cout << "Reverse: ";
    for (auto it = dq.rbegin(); it != dq.rend(); it++) {
        cout << *it << " ";
    }
    cout << endl;

    return 0;
}

// ✅ STL DEQUE FUNCTIONS:
// - push_back(val), push_front(val): Insert at back/front
// - emplace_back(val), emplace_front(val): Optimized insert
// - pop_back(), pop_front(): Remove from back/front
// - insert(it, val): Insert before position
// - erase(it): Remove element
// - front(), back(): Access first/last element
// - size(), clear(): Get size / clear all
// - begin(), end(), rbegin(), rend(): Traversal

// 🔁 REVERSE ITERATOR: use it++ not it--

// 🔄 COMPARISON: vector vs list vs deque

// ✅ VECTOR:
// - Dynamic array (contiguous memory)
// - Fast random access: O(1)
// - Slow insert/delete at front or middle: O(n)

// ✅ LIST:
// - Doubly linked list (non-contiguous)
// - Fast insert/delete anywhere: O(1)
// - No direct access: O(n) to reach index

// ✅ DEQUE:
// - Double ended queue
// - Fast insert/delete at both ends: O(1)
// - Random access is allowed: O(1)
// - Not as memory efficient as vector

// 🌟 USE CASE:
// - vector: Fast access, rare insert/delete
// - list: Many inserts/deletes in middle
// - deque: Frequent add/remove at both ends
