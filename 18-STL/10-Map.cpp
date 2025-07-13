#include <iostream>
#include <map>
using namespace std;

// ✅ Map in C++ STL: Like objects in JavaScript
// ✅ Stores data in key-value pairs with unique, sorted keys

int main() {
    map<string, int> price;

    // ✅ Insert using []
    price["tv"] = 1000;
    price["Headphone"] = 30;

    // ✅ Insert using insert()
    price.insert({"SmartPhone", 700});

    // ✅ Insert using emplace()
    price.emplace("laptop", 2000);

    // ✅ count() - checks if key exists (returns 0 or 1)
    if (price.count("tv")) {
        cout << "TV exists in the map ✅" << endl;
    }

    // ✅ find() - returns iterator to key if found, else price.end()
    auto it = price.find("laptop");
    if (it != price.end()) {
        cout << "Laptop price is $" << it->second << endl;
    } else {
        cout << "Laptop not found ❌" << endl;
    }

    // ✅ erase() - removes by key
    price.erase("tv");

    // ✅ Loop through map using auto (range-based loop)
    cout << "\nCurrent Items:\n";
    for (auto val : price) {
        cout << "Price for: " << val.first << " is $" << val.second << endl;
    }

    return 0;
}
// ✅ map<key_type, value_type> name;
// ✅ Keys are unique and sorted (ascending by default)
// ✅ Implemented using Red-Black Tree (O(log n) operations)

// 🔹 Insertion:
// map["key"] = value;            // Adds or updates
// map.insert({"key", value});    // Adds only if key doesn't exist
// map.emplace("key", value);     // Like insert but slightly faster

// 🔹 Access:
// map["key"]         → returns value (creates new key if missing)
// map.at("key")      → returns value, throws exception if key not found

// 🔹 Search:
// map.count("key")   → returns 1 if exists, else 0
// map.find("key")    → returns iterator to key-value pair or map.end()

// 🔹 Deletion:
// map.erase("key");  → deletes the key-value pair

// 🔹 Size/Clear:
// map.size()         → number of elements
// map.clear()        → removes all elements

// 🔹 Looping:
// for (auto val : map) {
//     val.first  → key
//     val.second → value
// }

// ⏱️ Time Complexity:
// insert, erase, find, count → O(log n)
