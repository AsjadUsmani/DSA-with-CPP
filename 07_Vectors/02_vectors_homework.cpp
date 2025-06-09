#include <iostream>
#include <vector>
using namespace std;

void reverseVec(vector<int> &vec, int size) {
    int start = 0;
    int end = size-1;
    while(start < end) {
        swap(vec[start], vec[end]);
        start++;
        end--;
    }
}

bool linearSearch(vector<int> &vec, int size, int target) {
    for(int val : vec) {
        if(val == target) {
            return true;
        }
    }
    return false;
}

int main() {
    int target = 8;
    vector<int> vec = {10,20,4,8,9,21};
    reverseVec(vec, vec.size());
    cout << "Reverse Vector elements are: " << endl;
    for(int val : vec) {
        cout << val << " ";
    }
    cout << endl;
    if(linearSearch(vec, vec.size(), target))
        cout << "Your number " << target << " is Present";
    else
        cout << "Your element " << target << "Is not present in Array.";
    return 0;
}