#include <iostream>
#include <vector>
using namespace std;

bool isValid(vector<int> &arr, int maxAlloc, int n, int k)
{
    int pages = 0, student = 1;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > maxAlloc)
            return false;
        if (pages + arr[i] <= maxAlloc)
        {
            pages += arr[i];
        }
        else
        {
            student++;
            pages = arr[i];
        }
    }
    return student > k ? false : true;
}

int findPages(vector<int> &arr, int k)
{
    // code here
    if (k > arr.size())
        return -1;
    int sum = 0, ans, n = arr.size();
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    int start = 0, end = sum;
    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        if (isValid(arr, mid, n, k))
        {
            ans = mid;
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
    }
    return ans;
}

int main()
{
    vector<int> arr = {2, 3, 1, 4};
    int m = 2;
    cout << findPages(arr, 2);
    return 0;
}


/*
The Book Allocation Problem is a classic example of applying binary search to search space rather than directly on array elements. The goal is to assign `n` books (with given number of pages) to `k` students such that the **maximum number of pages assigned to a student is minimized**, while ensuring each student gets **contiguous books**. This problem cannot be solved using greedy alone because there may be multiple valid allocations, and we need the one with the minimum maximum pages. To achieve this, we apply binary search on the range of possible maximum page values — the lower bound being the maximum number of pages in any single book (since a student has to read at least that much), and the upper bound being the sum of all pages (if only one student reads all books). For each mid-value in this range, we check whether it is possible to allocate books such that no student reads more than that many pages. This is done using the `isValid` function, which simulates allocation and counts the number of students needed. If more students are needed than allowed (`k`), the current mid is too small; otherwise, it may be the answer, and we try smaller values. This approach ensures we find the smallest maximum pages a student can get with valid allocation. The overall time complexity is `O(n log sum)`, making it efficient for large inputs.
*/