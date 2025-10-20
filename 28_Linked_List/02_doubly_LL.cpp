#include <iostream>
using namespace std;

class Node
{
public:
    int val;
    Node *next;
    Node *prev;
    Node(int val)
    {
        this->val = val;
        next = prev = NULL;
    }
};

class DoublyList
{
private:
    Node *head;
    Node *tail;

public:
    DoublyList()
    {
        head = tail = NULL;
    }
    void push_front(int val)
    {
        Node *newNode = new Node(val);
        if (head == NULL)
        {
            head = tail = newNode;
            return;
        }
        else
        {
            newNode->next = head;
            head->prev = newNode;
            head = newNode;
        }
    }

    void push_back(int val)
    {
        Node *newNode = new Node(val);
        if (head == NULL)
        {
            head = tail = newNode;
            return;
        }
        tail->next = newNode;
        newNode->prev = tail;
        tail = newNode;
    }

    void pop_front()
    {
        if (head == NULL)
        {
            cout << "List is already Empty..." << endl;
            return;
        }
        if (head == tail)
        {
            delete head;
            head = tail = NULL;
            return;
        }
        Node *temp = head;
        head = head->next;
        head->prev = NULL;
        temp->next = NULL;
        delete temp;
    }

    void pop_back()
    {
        if (head == NULL)
        {
            cout << "List is already Empty..." << endl;
            return;
        }
        if (head == tail)
        {
            delete head;
            head = tail = NULL;
            return;
        }
        Node *temp = tail;
        tail = tail->prev;
        tail->next = NULL;
        temp->prev = NULL;
        delete temp;
    }

    void insert(int val, int pos)
    {
        if (pos == 0)
            push_front(val);
        else if (pos < 0)
        {
            cout << "Invalid Position" << endl;
            return;
        }
        else
        {
            Node *newNode = new Node(val);
            Node *temp = head;
            for (int i = 0; i < pos - 1; i++)
            {
                temp = temp->next;
            }
            newNode->next = temp->next;
            temp->next->prev = newNode;
            temp->next = newNode;
            newNode->prev = temp;
            return;
        }
    }

    void search(int val)
    {
        Node *temp = head;
        while (temp != NULL)
        {
            if (temp->val == val)
            {
                cout << "Value is present" << endl;
                return;
            }
            temp = temp->next;
        }
        cout << "Value is not present" << endl;
    }

    void printLL()
    {
        if (head == NULL)
            cout << "DoublyList is Empty";
        else
        {
            Node *temp = head;
            while (temp != NULL)
            {
                cout << temp->val << "<->";
                temp = temp->next;
            }
            cout << "NULL";
            return;
        }
    }
};

int main()
{
    DoublyList ll;
    ll.push_front(1);
    ll.push_front(3);

    ll.push_back(5);
    ll.push_back(6);
    ll.push_back(7);
    ll.push_back(8);

    ll.pop_front();

    ll.pop_back();

    ll.insert(4, 1);

    ll.search(7);

    ll.printLL();
    return 0;
}