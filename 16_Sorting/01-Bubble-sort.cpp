#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> nums = {4, 1, 5, 2, 3};
    int n = nums.size();
    bool isSwap = false;
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (nums[j] > nums[j + 1])
            {
                swap(nums[j], nums[j + 1]);
                isSwap = true;
            }
        }
        if(!isSwap){ //Array already sorted hai.
            return;
        }
    }
    cout << "Sorted Array:" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << nums[i] << " ";
    }
}

/*
Bubble Sort repeatedly compares adjacent elements and swaps them if they are in the wrong order. It's called "bubble" because large values rise to the end like bubbles in water. It’s not efficient for large datasets but helps in understanding sorting logic. Works well on small arrays or when data is nearly sorted.
Example: Sorting students’ marks in increasing order from [50, 20, 40, 10] to [10, 20, 40, 50] using repeated adjacent swaps.
Let’s say you have a list of marks:
[50, 20, 40, 10] → you want to sort them in ascending order.

Pass 1:
Compare 50 & 20 → swap → [20, 50, 40, 10]
Compare 50 & 40 → swap → [20, 40, 50, 10]
Compare 50 & 10 → swap → [20, 40, 10, 50] ✅ 50 is now at the correct position.

Pass 2:
Compare 20 & 40 → OK
Compare 40 & 10 → swap → [20, 10, 40, 50] ✅ 40 is now at the correct position.

Pass 3:
Compare 20 & 10 → swap → [10, 20, 40, 50] ✅ all sorted!
*/