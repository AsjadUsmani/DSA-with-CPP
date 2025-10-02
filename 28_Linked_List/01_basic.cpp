#include <iostream>
using namespace std;

class Node{
    public:
        int data;
        Node* next;
        Node(int val){
            data = val;
            next = NULL;
        }
};

class List{
    Node* head;
    Node* tail;
public:
    List(){
        head = tail = NULL;
    }
    void push_front(int val){
        Node* newNode = new Node(val);
        if(head == NULL){
            head = tail = newNode;
            return;
        } else {
            newNode -> next = head;
            head = newNode;
            return;
        }
    }
    void push_back(int val){
        Node* newNode = new Node(val);
        if(head == NULL){
            head = tail = newNode;
            return;
        }
        tail -> next = newNode;
        tail = newNode;
    }

    void pop_front(){
        if(head == NULL){
            cout << "Linked List is already null.";
            return;
        }
        Node* temp = head;
        head = head->next;
        temp->next = NULL;
        delete temp;
    }

    void pop_back(){
        if(head == NULL){
            cout << "Linked List is already null.";
            return;
        }
        Node* temp = head;
        while(temp->next != tail){
            temp = temp -> next;
        }
        temp -> next = NULL;
        delete tail;
        tail = temp;
    }

    void insert(int val, int pos){
        if(pos < 0) {
            cout << "Invalid position.";
            return;
        }
        if(pos == 0) {
            push_front(val);
            return;
        }
        Node* temp = head;
        for(int i = 0; i < pos - 1; i++){
            temp = temp -> next;
        }
        Node* newNode = new Node(val);
        newNode -> next = temp -> next;
        temp -> next = newNode;
    }

    void search(int val){
        Node* temp = head;
        while(temp->next != NULL){
            if(temp->data == val){
                cout << "Value id present";
                return;
            }
            temp = temp -> next;
        }
        cout << "Value is not present" << endl;
    }

    void printLL(){
        Node* temp = head;
        while (temp != NULL)
        {
            cout << temp -> data << " -> ";
            temp = temp -> next;
        }
        cout << "NULL" << endl;
    }
};

int main(){
    List ll;
    ll.push_front(1);
    ll.push_front(2);
    ll.push_front(3);
    ll.push_front(4);

    ll.push_back(5);

    ll.pop_front();

    ll.pop_back();

    ll.insert(4, 1);

    ll.search(10);

    ll.printLL();
    return 0;
}