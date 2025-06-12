#include <iostream>
using namespace std;

int linearSearch(int arr[], int size, int target) {
    for(int i = 0; i < size; i++) {
        if(arr[i] == target) {
            return i;
        }
    }
    return -1;
}

//Reversing the array.
void reverseArray(int arr[], int size) {
    int start = 0;
    int end = size - 1;
    while(start < end) {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}

int main() {
    int target = 8, size;
    int a[] = {10, 20, 30, 2, 4, 8, 3, 6};
    size = sizeof(a) / sizeof(int);
    // if(linearSearch(a, size, target) == -1) {
    //     cout << "The Element you are searching is not present in Array." << endl;
    // } else {
    //     cout << "The Element you are searching is present in Array at index: " << linearSearch(a, size, target) << endl;
    // }
    reverseArray(a, size);
    cout << "Reverse Array: " << endl;
    for(int i = 0; i < size; i++) {
        cout << a[i] << " ";
    }
    return 0;
}