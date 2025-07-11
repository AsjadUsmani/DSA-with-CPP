#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> nums = {4, 1, 5, 2, 3};
    int n = nums.size();
    for(int i = 0; i < n - 1; i++){
        int idx = i;
        for(int j = i + 1; j < n; j++){
            if(nums[j] < nums[idx]){
                idx = j;
            }
        }
        swap(nums[i], nums[idx]);
    }
    cout << "Sorted Array:" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << nums[i] << " ";
    }
}


/*
Selection Sort is a simple sorting algorithm that sorts an array by repeatedly finding the minimum element from the unsorted part and placing it at the beginning. It maintains two subarrays: the left side is sorted, and the right side is unsorted. In each pass, it selects the smallest element from the unsorted subarray and swaps it with the first unsorted element.

Example:
Sorting [4, 1, 5, 2, 3] using selection sort:
First pass: find smallest (1), swap with 4 → [1, 4, 5, 2, 3]
Next: find smallest in rest (2), swap with 4 → [1, 2, 5, 4, 3]
Keep going till sorted → [1, 2, 3, 4, 5]

Time Complexity: Always O(n²)
Space: O(1) (no extra space used)
Best for: Small datasets, or when memory usage must be minimal.
*/
