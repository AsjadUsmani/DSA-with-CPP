#include<iostream>
using namespace std;

int main() {
    int age;
    cout << "Enter your age: " << endl;
    cin >> age;
    if (age >= 18) {
        cout << "You are Eligible to vote." <<endl;
    } else{
        cout << "You are not Eligible to vote." << endl;
    }
    return 0;
}