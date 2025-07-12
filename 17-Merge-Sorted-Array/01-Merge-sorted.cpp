#include <iostream>
#include <vector>
using namespace std;

void merge(vector<int> &nums1, int m, vector<int> &nums2, int n)
{
    int end = m + n - 1;
    int i = m - 1, j = n - 1;
    while (i >= 0 && j >= 0)
    {
        if (nums1[i] >= nums2[j])
        {
            nums1[end--] = nums1[i--];
        }
        else
        {
            nums1[end--] = nums2[j--];
        }
    }
    while (j >= 0)
    {
        nums1[end--] = nums2[j--];
    }
}

int main(){
    vector<int> nums1 = {1,2,3,0,0,0};
    vector<int> nums2 = {2,5,6};
    int m = 3, n = 3;
    merge(nums1, m, nums2, n);
    cout << "88. LeetCode" << endl;
    for(int val : nums1){
        cout << val << " ";
    }
}


/*
## ✅ Practical Example (Real-Life Scenario):

Imagine you work in a **library system** where:

* `nums1` = shelves already arranged with `m` sorted books: `[1, 3, 5]`
* `nums2` = another batch of `n` new sorted books: `[2, 4, 6]`

You want to **merge them in sorted order** directly into the shelf space (i.e., `nums1`), which already has space at the end for the new books:
`nums1 = [1, 3, 5, 0, 0, 0]` ← zeros are placeholders

---

## ✅ Summary:

The in-place merge works by filling `nums1` **from the end** using three pointers:

* `i`: Points to the last valid element in `nums1` (`m - 1`)
* `j`: Points to the last element in `nums2` (`n - 1`)
* `k`: Points to the last index of `nums1` (`m + n - 1`)

You compare elements from the end, and place the larger one at index `k`, moving the pointers accordingly.

### 🧠 Time Complexity: `O(m + n)`
### 🧠 Space Complexity: `O(1)`
## ✅ Dry Run Example:

```cpp
nums1 = [1, 3, 5, 0, 0, 0], m = 3  
nums2 = [2, 4, 6], n = 3
```

### Initial pointers:

* `i = m - 1 = 2` → nums1\[i] = 5
* `j = n - 1 = 2` → nums2\[j] = 6
* `k = m + n - 1 = 5`

---

### 🔁 Loop iterations:

1. Compare nums1\[2] = 5 and nums2\[2] = 6
   → 6 is larger → `nums1[5] = 6`
   → j--, k--

   `nums1 = [1, 3, 5, 0, 0, 6]`

2. Compare nums1\[2] = 5 and nums2\[1] = 4
   → 5 is larger → `nums1[4] = 5`
   → i--, k--

   `nums1 = [1, 3, 5, 0, 5, 6]`

3. Compare nums1\[1] = 3 and nums2\[1] = 4
   → 4 is larger → `nums1[3] = 4`
   → j--, k--

   `nums1 = [1, 3, 5, 4, 5, 6]`

4. Compare nums1\[1] = 3 and nums2\[0] = 2
   → 3 is larger → `nums1[2] = 3`
   → i--, k--

   `nums1 = [1, 3, 3, 4, 5, 6]`

5. Compare nums1\[0] = 1 and nums2\[0] = 2
   → 2 is larger → `nums1[1] = 2`
   → j--, k--

   `nums1 = [1, 2, 3, 4, 5, 6]`

Done! ✅
## ✅ Final Output:

nums1 = [1, 2, 3, 4, 5, 6]
Now, `nums1` contains all the sorted books — merged directly **without using extra space**.

*/