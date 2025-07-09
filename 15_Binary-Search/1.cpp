#include <iostream>
#include <vector>
using namespace std;

int binarySearch(vector<int> nums, int target)
{ // iterative
    int start = 0, end = nums.size() - 1, mid;
    while (start <= end)
    {
        mid = start + (end - start) / 2;
        if (nums[mid] == target)
            return mid;
        else if (nums[mid] > target)
            end = mid - 1;
        else
            start = mid + 1;
    }
    return -1;
}

int recursiveBinarySearch(vector<int> nums, int target, int start, int end)
{
    if (start < end)
    {
        int mid = start + (end - start) / 2;
        if (nums[mid] == target)
            return mid;
        else if (nums[mid] > target)
            return recursiveBinarySearch(nums, target, start, mid - 1);
        else if (target > nums[mid])
            return recursiveBinarySearch(nums, target, mid + 1, end);
    }
    return -1;
}

int main()
{
    int target;
    vector<int> nums = {10, 20, 30, 40, 50, 60};
    cout << "Target: ";
    cin >> target;
    int ans = binarySearch(nums, target);
    ans == -1 ? (cout << "Number not found") : (cout << "Number is on index: " << ans);
    cout << recursiveBinarySearch(nums, target, 0, nums.size() - 1);
    return 0;
}

/*
Theory:
What is Binary Search?
Binary search is a fast method to find something in a sorted list by repeatedly cutting the list in half.

Time: O(log n) — super fast!

Practical Examples (Simple Language)
1. 🔎 Searching a word in a dictionary app
2. 📚 Finding a book in a library catalog (by title or ID)

3. 🛒 E-commerce site: Searching for a product by price
A website has products sorted by price.
You want to know: what is the first product that costs ₹500 or more?
Binary search helps quickly find that point in the sorted price list.

4. 📱 Phone contacts (name search)
Your contact list is sorted by name.
When you type "A", your phone quickly jumps to names starting with A using binary search behind the scenes.

👨‍💻 Coding Problems (LeetCode, etc.):
Binary search is used in problems like:

First/last occurrence
Finding square roots
Searching in rotated arrays
Minimum in mountain arrays
Peak element
Search insert position

Summary: Use binary search when you need to quickly find something in a sorted list or range.

optimization:
1. agar array INT_MAX size ka hua or target last element hai to mid ki value start + end me INT_MAX 2 baar add hoga jo ki int ki capacity se bahar ho sakta hai to better always calculate mid as [start + (end - start)/2].
*/