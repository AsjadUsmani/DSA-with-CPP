#include <iostream>
#include <vector>
using namespace std;

int searchRotatedArray(vector<int> nums, int target)
{
    int start = 0, end = nums.size() - 1;
    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        if (target == nums[mid])
            return mid;
        if (nums[mid] >= nums[start])
        {
            if (target >= nums[start] && target <= nums[mid])
            {
                end = mid - 1;
            }
            else
            {
                start = mid + 1;
            }
        }
        else
        {
            if (target <= nums[end] && target >= nums[mid])
            {
                start = mid + 1;
            }
            else
            {
                end = mid - 1;
            }
        }
    }
    return -1;
}

int main()
{
    vector<int> nums = {1};
    cout << searchRotatedArray(nums, 0);
    return 0;
}

/*
Summary Notes (Perfect for Revision):
Rotated sorted array = sorted array rotated at some index

1. Always one half is sorted
2. Use binary search logic:
3. Check which half is sorted
4. Decide which half to search next
5. Time: O(log n)
6. Space: O(1)
Very useful for searching in rotated datasets

🛠 Practical Real-Life Example:
Imagine you're searching for a movie in a TV schedule app that was sorted by time but got shifted (rotated) for a new update. You want to find "Iron Man".

Example schedule (rotated):
["Spider-Man", "Thor", "Iron Man", "Avengers", "Ant-Man", "Batman"]
The app uses binary search in rotated array to quickly find "Iron Man" in log n time instead of going one by one.x
*/