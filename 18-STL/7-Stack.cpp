#include<iostream>   // For input/output operations like cout
#include<stack>      // For using the stack container
#include<vector>     // Included but not used in this code; can be removed
using namespace std; // To avoid writing std:: before every standard object

// Stack follows LIFO: Last In First Out
int main() {
    stack<int> s;     // Declare a stack of integers named 's'

    s.push(1);        // Pushes 1 onto the stack
    s.push(2);        // Pushes 2 onto the stack
    s.push(3);        // Pushes 3 onto the stack
    s.emplace(4);     // Emplaces 4 onto the stack (similar to push, but slightly more efficient for complex objects)

    // Now stack looks like: [1(bottom), 2, 3, 4(top)]

    while (!s.empty()) {      // Run loop until stack is empty
        cout << s.top() << endl;  // Print the top element of the stack
        s.pop();                  // Remove the top element
    }

    // At this point, stack 's' is completely empty

    stack<int> s2;     // Declare another empty stack s2
    s2.swap(s);        // Swap contents of s and s2
    // But both stacks are empty, so nothing happens here

    return 0;          // Exit the program
}
