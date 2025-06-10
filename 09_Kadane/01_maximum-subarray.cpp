#include<iostream>
#include<vector>
using namespace std;

int main() {
    vector<int> vec = {2, 5, 8, 10, 3};
    int n = vec.size();
    //Brute-Force approach.
    // for(int start = 0; start < n; start++){
    //     for(int end = start; end < n; end++){
    //         for(int i = start; i <= end; i++){
    //             cout << vec[i];
    //         }
    //         cout << " ";
    //     }
    //     cout << endl;
    // }
    //Maximum subarray sum using brute-force.
    // int m = INT32_MIN;
    // int sum;
    // for(int i = 0; i < n; i++) {
    //     sum = 0;
    //     for(int j = i; j < n; j++){
    //         sum += vec[j];
    //         m = max(sum, m);
    //     }
    // }
    // cout << "maximum sum is: " << m << endl;
    int currSum = 0;
        int m = INT32_MIN;
        for(int i = 0; i < vec.size(); i++){
            currSum += vec[i];
            m = max(currSum, m);
            if(currSum < 0)
                currSum = 0;
        }
        return m;
    }