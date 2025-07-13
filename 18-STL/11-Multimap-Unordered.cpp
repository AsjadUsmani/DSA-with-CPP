#include <iostream>
#include <unordered_map>
using namespace std;

// ✅ unordered_map stores key-value pairs without any order.
// ✅ Keys must be unique.

int main() {
    unordered_map<string, int> umap;

    // ✅ Insert using []
    umap["tv"] = 1000;
    umap["Headphone"] = 30;

    // ✅ Insert using insert() and emplace()
    umap.insert({"SmartPhone", 700});
    umap.emplace("laptop", 2000);

    // ✅ find() and count()
    if (umap.count("tv")) {
        cout << "TV found ✅ in unordered_map\n";
    }

    auto it = umap.find("laptop");
    if (it != umap.end()) {
        cout << "Laptop price is $" << it->second << endl;
    }

    // ✅ erase()
    umap.erase("tv");

    // ✅ Traversing unordered_map (no specific order)
    cout << "\nItems in unordered_map:\n";
    for (auto val : umap) {
        cout << "Price for: " << val.first << " is $" << val.second << endl;
    }

    return 0;
}
/*
// ✅✅✅ STL Map Types Comparison — Summary (VS Code Notes)

/\*
🔸 map                → Stores key-value in **sorted order** (unique keys)
🔸 unordered\_map      → Stores key-value in **any order** (hash table, unique keys)
🔸 multimap           → Stores key-value in **sorted order** (allows duplicate keys)
\*/
/*
🧠 Comparison Table:

| Feature                 | map                  | unordered\_map        | multimap             |
| ----------------------- | -------------------- | --------------------- | -------------------- |
| Order of Keys           | Sorted (by key)      | No order (Hash-based) | Sorted (by key)      |
| Duplicate Keys Allowed? | ❌ No                 | ❌ No                  | ✅ Yes                |
| Internal Structure      | Red-Black Tree (BST) | Hash Table            | Red-Black Tree (BST) |
| Insertion Time          | O(log n)             | O(1) avg, O(n) worst  | O(log n)             |
| Access/Search Time      | O(log n)             | O(1) avg, O(n) worst  | O(log n)             |
| Deletion Time           | O(log n)             | O(1) avg, O(n) worst  | O(log n)             |
| Maintains Sorted Order? | ✅ Yes                | ❌ No                  | ✅ Yes                |

/\*
💡 When to Use What:
--------------------

✅ Use `map`:
→ When you want keys in **sorted order**
→ When **duplicates are not allowed**
→ Example: maintaining a leaderboard, phone book

✅ Use `unordered_map`:
→ When **order doesn’t matter** and you want **faster access**
→ Uses hashing (like objects in JavaScript)
→ Example: frequency counting, caching

✅ Use `multimap`:
→ When **duplicate keys are needed**
→ Maintains sorted order
→ Example: storing multiple values under same key (like test scores of a student)
\*/
/*
/\*
🧪 STL Functions for all Maps:
------------------------------

* insert()
* emplace()
* erase(key)
* count(key)
* find(key)
* clear()
* size()
* empty()

🧠 Looping Example:
for (auto pair : mapName) {
cout << pair.first << " -> " << pair.second << endl;
}
*/