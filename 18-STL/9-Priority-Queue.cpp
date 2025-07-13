#include<iostream>   // For input/output operations
#include<queue>      // For using the queue STL container
using namespace std; // To avoid using std:: every time


int main() {
    priority_queue<int, vector<int>, greater<int>> pq;
    pq.push(5);
    pq.push(7);
    pq.push(3);
    pq.push(10);
    while(!pq.empty()){
        cout << pq.top() << " ";
        pq.pop();
    }
    return 0;
}