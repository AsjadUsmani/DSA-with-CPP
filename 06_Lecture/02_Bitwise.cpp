#include <iostream>
using namespace std;

int main() {
    int a = 6, b = 10;
    cout << "a&b: " << (a & b) << endl;
    cout << "a|b: " << (a | b) <<endl;
    cout << "a^b: " << (a ^ b) <<endl;
    cout << "10 << 2: " << (10 << 2) <<endl;//left shift
    cout << "10 >> 1: " << (10 >> 1) <<endl;//right shift
    return 0;
}