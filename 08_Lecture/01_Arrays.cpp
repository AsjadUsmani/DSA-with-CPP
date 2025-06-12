#include <iostream>
using namespace std;

int smallestInArray(int marks[], int size) {
    int min = INT32_MAX;
    for(int i = 0; i < size; i++) {
        if(marks[i] < min) {
            min = marks[i];
        }
    }
    return min;
}
int smallestIndexInArray(int marks[], int size) {
    int min = INT32_MAX;
    int index;
    for(int i = 0; i < size; i++) {
        if(marks[i] < min) {
            min = marks[i];
            index = i;
        }
    }
    return index;
}
int largestInArray(int marks[], int size) {
    int max = INT32_MIN;
    for(int i = 0; i < size; i++) {
        if(marks[i] > max) {
            max = marks[i];
        }
    }
    return max;
}
int largestIndexInArray(int marks[], int size) {
    int max = INT32_MIN;
    int index;
    for(int i = 0; i < size; i++) {
        if(marks[i] > max) {
            max = marks[i];
            index = i;
        }
    }
    return index;
}

int main() {
    int marks[] = {-2, 10, 5, -50, -18, 8, 4, 7};//This will dynamically allocate the size to array.
    int sizeOfArray = sizeof(marks) / sizeof(int);
    /*sizeof(marks) will give the size of memory occupied by marks array i.e 12*/
    // cout << sizeOfArray << endl;
    // for(int i = 0; i < sizeOfArray; i++) {
    //     cout << marks[i] << endl;
    // }
    cout << "Smallest Number in array:" << smallestInArray(marks, sizeOfArray) << endl;
    cout << "Largest Number in array:" << largestInArray(marks, sizeOfArray) << endl;
    cout << "Smallest Number,s Index in array:" << smallestIndexInArray(marks, sizeOfArray) << endl;
    cout << "Largest Number's Index in array:" << largestIndexInArray(marks, sizeOfArray) << endl;
    //C++ also had a min() and max() in-build fuctions.
    return 0;
}