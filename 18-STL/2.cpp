#include <iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> vec = {1, 2, 3, 4, 5};
    //erase() and insert() are the two inbuild functions in C++ which uses O(n) Time Complexity.
    // cout << vec.begin() << endl;// Not Printable Element.
    // vec.erase(vec.begin() + 3, vec.begin() + 5); // 123
    vec.insert(vec.begin() + 2, 100); // 1 2 100 3 4 5 
    vec.clear(); // clears the whole vector but capacity remains the same but size becomes 0.
    cout << vec.empty() << endl; // returns true or false based on if vector is empty or not.
    for(int val : vec){
        cout << val << " ";
    }
    cout << endl;
    return 0;
}