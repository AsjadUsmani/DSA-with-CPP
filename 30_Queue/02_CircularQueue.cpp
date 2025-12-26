#include<iostream>
using namespace std;

class CircularQueue {
    int* arr;
    int f, r;
    int currSize, cap;
public:
    CircularQueue(int data) {
        cap = data;
        f = 0;
        r = -1;
        arr = new int[cap];
    }

    void pop(){
        if(r == -1) {
            cout << "Queue is Empty";
            return;
        }
        f = (f + 1) % cap;
        currSize--;
    }

    void push(int val){
        if(currSize == cap) {
            cout << "Queue is Full";
            return;
        }
        r = (r + 1) % cap;
        arr[r] = val;
        currSize++;
    }
};

int main(){

}