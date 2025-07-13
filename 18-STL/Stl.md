# 🚀 C++ STL (Standard Template Library) - Complete Revision Guide

This Markdown file covers **everything we have learned in STL** from scratch to advanced with **practical examples**, **explanations**, and **key points for revision**. Use this as your go-to file for **STL preparation**.

---

## ✅ 1. Pairs in STL

### ➤ What is a pair?

* Stores two values of **different or same** types.
* Accessed via `.first` and `.second`.

### 🔹 Syntax:

```cpp
pair<int, int> p = {1, 2};
pair<int, string> p2 = {3, "Asjad"};
cout << p.first << " " << p.second << endl;
```

### 🔹 Nested Pair:

```cpp
pair<int, pair<char, int>> p = {3, {'a', 7}};
cout << p.second.first << " " << p.second.second << " " << p.first;
```

### 🔹 Vector of pairs:

```cpp
vector<pair<int, int>> vec = {{1, 2}, {3, 4}};
vec.push_back({5, 6});
vec.emplace_back(7, 8);
```

---

## ✅ 2. Vector in STL

### ➤ Vector is a dynamic array.

### 🔹 Common Functions:

```cpp
vec.push_back(x);
vec.pop_back();
vec.size();
vec.clear();
vec.begin(); // returns iterator to first element
vec.end();   // returns iterator after last element
```

### 🔹 Traversal:

```cpp
for (auto val : vec) cout << val;
for (auto it = vec.begin(); it != vec.end(); ++it) cout << *it;
for (auto it = vec.rbegin(); it != vec.rend(); ++it) cout << *it;
```

---

## ✅ 3. List in STL

### ➤ Doubly Linked List (efficient insert/delete from both ends)

### 🔹 Common Functions:

```cpp
list.push_back(x);
list.push_front(x);
list.pop_back();
list.pop_front();
list.front();
list.back();
list.insert(pos, x);
list.erase(pos);
list.clear();
```

---

## ✅ 4. Deque in STL

### ➤ Double-ended Queue

### 🔹 Functions (same as list + vector):

```cpp
dq.push_back(x);
dq.push_front(x);
dq.pop_back();
dq.pop_front();
dq.at(i);
dq[i];
dq.front();
dq.back();
```

---

## ✅ 5. Stack in STL

### ➤ LIFO (Last In First Out)

```cpp
stack<int> s;
s.push(x);
s.top();
s.pop();
s.empty();
s.size();
```

---

## ✅ 6. Queue in STL

### ➤ FIFO (First In First Out)

```cpp
queue<int> q;
q.push(x);
q.front();
q.pop();
q.empty();
q.size();
q.emplace(x);
```

---

## ✅ 7. Priority Queue

### ➤ Max Heap by default

```cpp
priority_queue<int> pq;
pq.push(x);
pq.top();
pq.pop();
```

### ➤ Min Heap:

```cpp
priority_queue<int, vector<int>, greater<int>> min_pq;
```

---

## ✅ 8. Set in STL

### ➤ Stores unique elements in sorted order

```cpp
set<int> s;
s.insert(x);
s.erase(x);
s.find(x);
s.count(x);
s.size();
s.begin(); s.end();
s.lower_bound(x);
s.upper_bound(x);
```

---

## ✅ 9. Unordered Set

### ➤ Stores unique elements in **any** order using **hash table**

```cpp
unordered_set<int> us;
```

### ❗ O(1) on average, worst-case O(n)

---

## ✅ 10. Multiset

### ➤ Allows duplicate elements

```cpp
multiset<int> ms;
ms.insert(x);
ms.count(x);
ms.erase(ms.find(x));
```

---

## ✅ 11. Map in STL

### ➤ Key-Value Store (like JS objects)

```cpp
map<string, int> price;
price["tv"] = 1000;
price.erase("tv");
price.count("tv");
```

### ➤ Sorted by key in ascending order

---

## ✅ 12. Unordered Map

### ➤ Like map but uses hashing, not sorted

```cpp
unordered_map<string, int> m;
```

---

## ✅ 13. Multimap

### ➤ Allows duplicate keys

```cpp
multimap<string, int> mm;
mm.insert({"apple", 10});
mm.insert({"apple", 20});
```

---

## ✅ 14. Algorithms in <algorithm>

```cpp
sort(vec.begin(), vec.end());
sort(vec.begin(), vec.end(), greater<int>());
reverse(vec.begin(), vec.end());
next_permutation(vec.begin(), vec.end());
swap(a, b);
min(a, b); max(a, b);
binary_search(vec.begin(), vec.end(), key);
__builtin_popcount(x); // count of set bits
```

---

## 🔄 STL Map Types Comparison

| Feature       | map            | unordered\_map       | multimap       |
| ------------- | -------------- | -------------------- | -------------- |
| Order         | Sorted by key  | No order (hashed)    | Sorted by key  |
| Duplicates    | ❌ Not allowed  | ❌ Not allowed        | ✅ Allowed      |
| Access time   | O(log n)       | O(1) avg, O(n) worst | O(log n)       |
| Underlying DS | Red-Black Tree | Hash Table           | Red-Black Tree |

---

## 🧠 STL Key Takeaways

* STL provides efficient, reusable data structures.
* Prefer STL over writing custom data structures for speed and safety.
* Practice STL-based coding problems for mastery.
* Iterators are crucial to navigating STL containers.

---

## ✍️ Final Tips

* Use `auto` to simplify iterator syntax.
* `emplace_back()` is faster than `push_back()` (constructs in-place).
* Always check time complexity when choosing between vector, list, set, etc.
* Master `sort()` with custom comparators for interview-level problems.