#include <iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> vec;
    vec.push_back(1);
    vec.push_back(2);
    vec.push_back(3);
    vec.push_back(4);
    vec.emplace_back(5);
    cout << "Vector Size: " << vec.size() << endl;
    cout << "Vector Capacity: " << vec.capacity() << endl;
    cout << "Vector: " << endl;
    for(int val : vec){
        cout << val << " ";
    }
    cout << endl;
    cout << "Index 4 element: " << vec[4] << endl;
    cout << "First element of Vector: " << vec.front() << endl;
    cout << "Last element of Vector: " << vec.back() << endl;
    vec.pop_back();
    for(int val : vec){
        cout << val << " ";
    }
    vector<int> vec2(vec);//copies all elements of vec in vec2. 
    return 0;
}