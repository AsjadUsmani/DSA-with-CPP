#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> nums = {4, 1, 5, 2, 3};
    int n = nums.size(), currVal;
    
    for(int i = 1; i < n; i++){
        int prev = i - 1;
        currVal = nums[i];
        while(prev >= 0 && nums[prev] > currVal){
            nums[prev + 1] = nums[prev];
            prev--;
        }
        nums[prev + 1] = currVal;
    }
    cout << "Sorted Array:" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << nums[i] << " ";
    }
}


/*
Insertion Sort is a simple algorithm that builds the sorted array one item at a time. It’s like sorting cards in your hand. It works well for small datasets or nearly sorted arrays. It has O(n²) time complexity in the worst case but performs very well on small or partially sorted data (O(n) in best case). It sorts the array in-place with no extra space.
Let’s sort this array:
[5, 2, 4, 6, 1]

Step-by-step:
Start with 2 (index 1) → compare with 5 → 5 is larger → shift it → insert 2 → [2, 5, 4, 6, 1]
Now take 4 → compare with 5 → shift 5 → insert 4 → [2, 4, 5, 6, 1]
Take 6 → already in correct place
Take 1 → shift all (6, 5, 4, 2) → insert at beginning → [1, 2, 4, 5, 6]
*/