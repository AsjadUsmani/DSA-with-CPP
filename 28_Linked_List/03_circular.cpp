#include<iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;
    Node(int val){
        data = val;
        next = NULL;
    }
};

class CircularLL{
private:
    Node* head;
    Node* tail;
public:
    CircularLL(){
        head = tail = NULL;
    }

    void push_front(int val){
        Node* newNode = new Node(val);
        if(head == NULL){
            head = tail = newNode;
            return;
        }
        tail -> next = newNode;
        newNode -> next = head;
        head = newNode;
    }

    void push_back(int val){
        Node* newNode = new Node(val);
        if(head == NULL){
            head = tail = newNode;
        }
        tail -> next = newNode;
        newNode -> next = head;
        tail = newNode;
    }

    void pop_front(){
        if(head == NULL){
            cout << "List is already Empty." << endl;
            return;
        }
        Node* temp = head;
        head = head ->next;
        tail -> next = head;
        temp -> next = NULL;
        delete temp;
    }

    void pop_back(){
        if(head == NULL){
            cout << "List is already Empty." << endl;
            return;
        }
        Node* temp = head;
        while(temp -> next != tail){
            temp = temp -> next;
        }
        temp -> next = head;
        tail -> next = NULL;
        delete tail;
        tail = temp;
    }

    void search(int val){
        Node* temp = head;
        do{
            if(temp -> data == val){
                cout << "Data is present." << endl;
                return;
            }
            temp = temp -> next;
        } while(temp != head);
        cout << "Data is not present in LL." << endl;
    }

    void printLL(){
        if(head == NULL) {
        cout << "List is empty" << endl;
        return;
    }
    
    Node* temp = head;
    do {
        cout << temp->data << "->";
        temp = temp->next;
    } while(temp != head);  // Changed condition to check for complete circle
    cout << endl;
    }
};

int main(){
    CircularLL ll;
    ll.push_front(1);
    ll.push_front(2);

    ll.push_back(5);

    ll.pop_front();

    ll.pop_back();
    ll.printLL();
    return 0;
}