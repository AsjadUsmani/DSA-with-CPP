#include<iostream>   // For input/output operations
#include<queue>      // For using the queue STL container
using namespace std; // To avoid using std:: every time

// ✅ QUEUE in C++ STL
// ✅ Queue follows FIFO → First In First Out
// ✅ New elements are added at the back & removed from the front

int main() {
    queue<int> q;  // Declaring a queue of integers

    // 🔹 Pushing elements to the queue
    q.push(10);       // queue → [10]
    q.push(20);       // queue → [10, 20]
    q.push(30);       // queue → [10, 20, 30]
    q.emplace(40);    // emplace is faster than push → queue → [10, 20, 30, 40]

    // 🔹 Traversing the queue using front() and pop()
    while (!q.empty()) {
        cout << q.front() << endl;  // Print front element
        q.pop();                    // Remove front element
    }

    // 🔹 Swapping two queues (both are empty now, so no effect)
    queue<int> q2;
    q2.swap(q);

    return 0;
}

/*
Initial Queue: [10, 20, 30, 40]

1st iteration → front = 10 → print 10 → pop → queue = [20, 30, 40]
2nd iteration → front = 20 → print 20 → pop → queue = [30, 40]
3rd iteration → front = 30 → print 30 → pop → queue = [40]
4th iteration → front = 40 → print 40 → pop → queue = []

Final Output:
10
20
30
40
*/