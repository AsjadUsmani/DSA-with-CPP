#include <iostream>
#include <vector>
using namespace std;

// Brute-force(n):
vector<int> searchRange(vector<int> &nums, int target)
{
    vector<int> ans(2, -1);
    int count = 0, index = 0;
    for (int i = 0; i < nums.size(); i++)
    {
        if (nums[i] == target)
        {
            if (index == 0)
            {
                index = i;
            }
            count++;
        }
    }
    if (count != 0)
    {
        ans[0] = index;
        ans[1] = index + count - 1;
        return ans;
    }
    return ans;
}

// First and Last position in sorted array
vector<int> searchRange(vector<int> &nums, int target)
{
    vector<int> result = {-1, -1};
    int left = binarySearch(nums, target, true);
    int right = binarySearch(nums, target, false);
    result[0] = left;
    result[1] = right;
    return result;
}

int binarySearch(vector<int> &nums, int target, bool isSearchingLeft)
{
    int left = 0;
    int right = nums.size() - 1;
    int idx = -1;

    while (left <= right)
    {
        int mid = left + (right - left) / 2;

        if (nums[mid] > target)
        {
            right = mid - 1;
        }
        else if (nums[mid] < target)
        {
            left = mid + 1;
        }
        else
        {
            idx = mid;
            if (isSearchingLeft)
            {
                right = mid - 1;
            }
            else
            {
                left = mid + 1;
            }
        }
    }

    return idx;
}

// Sinle element in a sorted array
int singleElement(vector<int> nums)
{
    int start = 0, end = nums.size() - 1;
    if (nums.size() == 1)
    {
        return nums[0];
    }
    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        if (mid == 0 && nums[mid] != nums[mid + 1])
            return nums[mid];
        if (mid == nums.size() - 1 && nums[mid] != nums[mid - 1])
            return nums[mid];
        if (nums[mid - 1] != nums[mid] && nums[mid + 1] != nums[mid])
        {
            return nums[mid];
        }
        else if (mid % 2 == 0)
        {
            if (nums[mid - 1] == nums[mid])
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
            if (nums[mid - 1] == nums[mid])
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
    vector<int> nums = {1, 1, 2, 3, 3, 4, 4, 8, 8};
    singleElement(nums);
    return 0;
}

/*
//Problem: Find the Single Element in a Sorted Array
❓ What’s the problem?
You are given a sorted array where every element appears twice — except one element that appears only once.

Your task: Find that single (unique) element in O(log n) time.

Idea Behind the Algorithm
The array is sorted.

Normally, each pair takes 2 positions:

First at even index (0, 2, 4, ...)

Second at odd index (1, 3, 5, ...)

But when a single element breaks this pattern, we use binary search to narrow down the search space.

🔧 Key Observations:
If nums[mid] == nums[mid ^ 1] → We are on the left side of the array (before the single element)

(^ 1 flips even/odd index: 4 → 5, 5 → 4)

Else → We are on the right side of the array
🛠 Real-Life Analogy:
Imagine you have a sorted row of lockers, and every locker has a duplicate key, placed next to it — except one locker that has only one key.
You want to find that one special key without opening all lockers.
Using this method, you can find it quickly by halving the lockers each time.
🔁 Revision Summary:
🔑 Concept	📘 Description
Problem Type	Find the unique element in a sorted array
Input Format	Sorted array where all elements appear twice except one
Output	The single non-repeating element
Strategy	Binary Search using index pattern logic
Key Property	Before single: pairs at even-odd (0-1, 2-3...)
After single	Pairs break → we use this to find the unique one
Time Complexity	O(log n)
Space Complexity	O(1)
Used In	Log-based searching, low-level memory optimization, etc.
*/