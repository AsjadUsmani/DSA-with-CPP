#include <iostream>
#include <vector>
#include <list>
using namespace std;

// ✅ LIST IN C++ STL - Like a doubly linked list (each node has previous and next link)
// Useful when you need fast insertions/deletions from both ends or in the middle

int main() {
    // Creating a list of integers
    list<int> l;

    // ✅ push_back() → adds element at the end
    l.push_back(10);  // List: 10

    // ✅ push_front() → adds element at the front
    l.push_front(5);  // List: 5 10

    // ✅ emplace_back() → more efficient version of push_back()
    l.emplace_back(20);  // List: 5 10 20

    // ✅ emplace_front() → more efficient version of push_front()
    l.emplace_front(1);  // List: 1 5 10 20

    // ✅ front() → returns first element
    cout << "Front: " << l.front() << endl;  // Output: 1

    // ✅ back() → returns last element
    cout << "Back: " << l.back() << endl;    // Output: 20

    // ✅ pop_back() → removes last element
    l.pop_back();  // List: 1 5 10

    // ✅ pop_front() → removes first element
    l.pop_front(); // List: 5 10

    // ✅ insert() → inserts element at a specific position
    auto it = l.begin(); // pointing to first element (5)
    l.insert(it, 100);   // inserts 100 before 5 → List: 100 5 10

    // ✅ erase() → erases element at iterator position
    it = l.begin();      // pointing to 100
    l.erase(it);         // List: 5 10

    // ✅ size() → returns number of elements
    cout << "Size of list: " << l.size() << endl;  // Output: 2

    // ✅ clear() → removes all elements
    l.clear();           // List becomes empty

    // ✅ begin() → returns iterator to first element
    // ✅ end() → returns iterator to position after last element
    // ✅ rbegin() → reverse begin (last element)
    // ✅ rend() → reverse end (before first element)

    // Add some elements again for traversal
    l.push_back(11);
    l.push_back(22);
    l.push_back(33);

    // Forward Traversal using iterator
    cout << "Forward: ";
    for(auto it = l.begin(); it != l.end(); it++) {
        cout << *it << " ";
    }
    cout << endl;

    // Reverse Traversal using reverse_iterator
    cout << "Reverse: ";
    for(auto it = l.rbegin(); it != l.rend(); it++) {
        cout << *it << " ";
    }
    cout << endl;

    return 0;
}


// 🔁 std::list is a doubly linked list (can insert/delete from both front and back efficiently)
// ✅ push_back(val)      → Add val at end
// ✅ push_front(val)     → Add val at front
// ✅ emplace_back(val)   → Efficient push_back()
// ✅ emplace_front(val)  → Efficient push_front()
// ✅ pop_back()          → Remove last element
// ✅ pop_front()         → Remove first element
// ✅ front() / back()    → Access first / last element
// ✅ insert(it, val)     → Insert before position 'it'
// ✅ erase(it)           → Erase element at 'it'
// ✅ size()              → Total elements
// ✅ clear()             → Remove all elements
// ✅ begin(), end(), rbegin(), rend() → Iterator traversal

// 🔄 DIFFERENCE: VECTOR vs LIST
// ✅ vector → dynamic array (fast random access, slow insert/delete in middle)
// ✅ list   → doubly linked list (fast insert/delete, slow random access)
//      vector[i] → O(1) time
//      list[i]   → O(n) time (no direct access)(loi bhi index direct access nahi kr sakte list ke ander.)