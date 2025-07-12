#include<iostream>
#include<bits/stdc++.h>
using namespace std;


void nextPermutation(vector<int> &nums)
{
    int pivot = -1;
    int n = nums.size();
    for (int i = n - 2; i >= 0; i--)
    {
        if (nums[i] < nums[i + 1])
        {
            pivot = i;
            break;
        }
    }
    if (pivot == -1)
    {
        reverse(nums.begin(), nums.end());
        return;
    }

    for (int i = n - 1; i > pivot; i--)
    {
        if (nums[pivot] < nums[i])
        {
            swap(nums[pivot], nums[i]);
            break;
        }
    }
    reverse(nums.begin() + pivot + 1, nums.end());
}



/*
🔁 Algorithm Logic (Step-by-Step):
Step 1: Find the Pivot
Start from the end of the array and find the first number that is smaller than its next number.
This is the point where the increase stops.

👉 This is called the pivot.

Example:
In [1, 3, 5, 4, 2], the pivot is 3 because 3 < 5.

Step 2: Find the Smallest Number Greater than Pivot
From the end again, find the smallest number greater than the pivot (just bigger) and swap it with the pivot.

This makes the number slightly bigger, which moves us to the next permutation.

Step 3: Reverse the Suffix
After the pivot index, the rest of the array is in descending order.

To make the number smallest after the swap, reverse the part after the pivot.

This gives us the next permutation.

🧪 Example:
Input:
nums = [1, 3, 2]

Step-by-step:
Pivot = 1 (index 0)

Next greater than pivot = 2 (index 2)

Swap → [2, 3, 1]

Reverse after pivot → [2, 1, 3]

✅ Output: [2, 1, 3]

❌ Special Case:
If the array is in descending order (like [5, 4, 3, 2, 1]), it’s already the largest permutation.

So, we just reverse the whole array to get the smallest:
✅ Output: [1, 2, 3, 4, 5]

✅ Time and Space Complexity:
Time Complexity: O(n)

Space Complexity: O(1) (in-place changes, no extra memory)

📚 Real-Life Analogy:
Think of unlocking a combination lock with numbers. If your current code is 123, the next possible code is 132. If you’re at the last code 321, you go back to the start: 123.
*/