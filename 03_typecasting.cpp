#include<iostream>
using namespace std;

int main() {
    int price = 100;
    double doublePrice = price;// implicit conversion
    int anotherPrice = (int)doublePrice;
    cout << doublePrice << endl << anotherPrice << endl;// type casting
    return 0;
}