#include <iostream>
#include <vector>
using namespace std;

void sortColors(vector<int> &nums)
{
    int low = 0, mid = 0, high = nums.size() - 1;
    while (mid <= high)
    {
        if (nums[mid] == 0)
        {
            swap(nums[low], nums[mid]);
            low++;
            mid++;
        }
        else if (nums[mid] == 1)
        {
            mid++;
        }
        else
        {
            swap(nums[high], nums[mid]);
            high--;
        }
    }
}

int main(){
    vector<int> nums = {1, 0, 2, 1, 2, 0};
    sortColors(nums);
    cout << "DNF: (Dutch National Flag Problem):" << endl;
    for(int val : nums){
        cout << val << " ";
    }
}

/*
This algorithm uses 3 pointers:

low: points to the next position for 0
mid: current element being checked
high: points to the next position for 2

✅ Logic:
If nums[mid] == 0: swap with nums[low], move both low and mid forward.
If nums[mid] == 1: just move mid forward.
If nums[mid] == 2: swap with nums[high], move high backward.

Key Idea: All elements before low are 0s, all after high are 2s, and between low and mid are 1s or unknown.

🔄 Dry Run of [2, 0, 2, 1, 1, 0]:

Initial:
low=0, mid=0, high=5
nums = [2, 0, 2, 1, 1, 0]

nums[0] = 2 → swap with nums[5] → [0, 0, 2, 1, 1, 2], high--
nums[0] = 0 → swap with nums[0] → [0, 0, 2, 1, 1, 2], low++, mid++
nums[1] = 0 → swap with nums[1] → [0, 0, 2, 1, 1, 2], low++, mid++
nums[2] = 2 → swap with nums[4] → [0, 0, 1, 1, 2, 2], high--
nums[2] = 1 → mid++
nums[3] = 1 → mid++

Loop ends. Final array: [0, 0, 1, 1, 2, 2]
*/