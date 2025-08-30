#include<iostream>
using namespace std;

void printNum(int n){
    int count = 1;
    if(n == 1) {
        cout << " " << n;
        return;
    }
    else {
        cout << n << " ";
        printNum(n - 1);
    }
}

int fact(int n){
    if(n == 1){
        return 1;
    }
    return n * fact(n - 1);
}

int sumOfNNumbers(int n){ // TC: O(n), SC: O(n)
    if(n == 0) return 0;
    return n + sumOfNNumbers(n - 1);
}

int main(){
    printNum(5);
    cout << endl;
    cout << fact(4) << endl;
    cout << sumOfNNumbers(4) << endl;
    return 0;
}

// TC = Total calls in recursion tree * work done in each call
// SC = Depth of Rec. tree (Height of call stack) * auxillary space occupied