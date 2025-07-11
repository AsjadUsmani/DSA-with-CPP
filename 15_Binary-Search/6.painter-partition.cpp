#include<iostream>
#include<vector>
using namespace std;

bool isValid(int maxTime, vector<int> &nums, int k, int n){
    int time = 0, painters = 1;
    for(int i = 0; i < n; i++){
        if(nums[i] > maxTime) return false;
        if(nums[i] + time <= maxTime){
            time += nums[i];
        } else{
            painters++;
            time = nums[i];
        }
    }
    return painters > k ? false : true;
}

int painterPartition(vector<int> &nums, int k){
    if(k > nums.size()) {
        return -1;
    }
    int sum = 0, n = nums.size();
    for(int i = 0; i < n; i++){
        sum += nums[i];
    }
    int start = 0, end = sum, ans;
    while(start <= end){
        int mid = start + (end - start) / 2;
        if(isValid(mid, nums, k, n)){
            ans = mid;
            end = mid - 1;
        } else {
            start = mid + 1;
        }
    }
    return ans;
}

int main(){
    vector<int> nums = {5, 10, 30, 20, 15};
    int k = 3;
    cout << painterPartition(nums, k);
    return 0;
}

/*
📘 Theory Summary (For Revision):
The Painter Partition Problem is about allocating painting tasks (given as board lengths) to a fixed number of painters such that the maximum time any painter takes is minimized. Painters can only paint contiguous sections of the array. We use binary search on the possible maximum time a painter can take (from 0 to total sum of boards). For each guessed time (mid), we use a helper function isValid() to check if it's possible to divide the work among k painters. If it is possible, we try to reduce the time (end = mid - 1) to get a better minimum. If not, we increase the limit (start = mid + 1). This efficient approach works in O(n log sum) time and avoids brute force assignment.
*/