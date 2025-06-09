#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> vec = {10, 20, 30};
    // vector<int> vec(3, 0);// vec(size, initial value)// op: 0, 0, 0.
    // cout << vec[0] << endl;
    // cout << vec[2] << endl;
    // cout << vec[1] << endl;
    // forEach loop in Vectors.
    for(int val : vec) {
        // cout << val << endl;
    }
    //vector's functions:
    // 1. size(), 1. push_back(), 3. pop_back(), 4.front(), 5. back(), 6. at().
    cout << "size:" << vec.size() << endl;//3
    vec.push_back(25);
    cout << "Push in vec after size: " << vec.size() << endl;
    cout << "Array capacity: " << vec.capacity() << endl;
}