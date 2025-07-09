#include <iostream>
#include <vector>
using namespace std;

int mountainPeak(vector<int> nums){
    int start = 1, end = nums.size() - 2;//To avoid Edge Cases of (mid -+ 1);
    while(start <= end) {
        int mid = start + (end - start) / 2;
        if(nums[mid] > nums[mid - 1] && nums[mid] > nums[mid + 1]){
            return mid;
        } else if(nums[mid] < nums[mid + 1] && nums[mid] > nums[mid - 1]){
            start = mid + 1;
        } else if(nums[mid] > nums[mid + 1] && nums[mid] < nums[mid - 1]){
            end = mid - 1;
        }
    }
    return -1;
}

int main(){
    vector<int> nums = {3, 5, 3, 2, 0};
    cout << mountainPeak(nums) << endl;
    return 0;
}

//Notes
/*
🔁 Revision Summary: Peak Element
🔑 Concept	📘 Description
1. Definition:	An element nums[i] is a peak if it's > neighbors
2. Edge Condition:	First or last element can also be a peak
3. Allowed Peaks:	There can be multiple peaks, return any one
4. Approach:	Use Binary Search based on slope
5. Key Logic:	- If nums[mid] > nums[mid+1] → Go left (downhill)
- Else → Go right (uphill)
6. Time Complexity:	O(log n) (Binary Search)
7. Space Complexity:	O(1) (no extra space used)
8. Useful For	Mountain arrays, performance optimization
9. Real-life Analogy	Hiking a mountain → peak is a highest point locally
*/