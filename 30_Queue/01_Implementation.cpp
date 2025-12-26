#include<iostream>
#include<vector>
using namespace std;

class Node {
public:
    Node* next;
    int data;
    Node(int val){
        data = val;
        next = NULL;
    }
};

class Queue {
    Node* head;
    Node* tail;
public:
    Queue() {
        head = tail = NULL;
    }

    void push(int val){
        Node* newNode = new Node(val);
        if(head == NULL) head = tail = newNode;
        else {
            tail -> next = newNode;
            tail = tail -> next;
        }
    }

    void pop() {
        if(head == NULL) {
            cout << "Queue is already empty.";
            return;
        }
        Node* temp = head;
        head = head -> next;
        delete temp;
    }

    int front() {
        if(head == NULL) return -1;
        return head -> data;
    }

    bool empty() {
        return head == NULL;
    }
};

int main() {
    Queue q;
    q.push(3);
    q.push(4);
    q.push(5);
    q.push(6);
    q.push(7);

    while(!q.empty()){
        cout << q.front() << "->";
        q.pop();
    }
    return 0;
}