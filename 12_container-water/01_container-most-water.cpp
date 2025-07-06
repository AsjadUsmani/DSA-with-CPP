#include <iostream>
#include <vector>
using namespace std;

// My-Failed(Brute-Force)
int bruteContainer(vector<int> height)
{
    int breadth = 0, length = 0, area = 0;
    for (int i = 0; i < height.size() - 1; i++)
    {
        for (int j = i + 1; j < height.size(); j++)
        {
            length = j - i;
            if (height[i] <= height[j])
            {
                breadth = height[i];
            }
            else
            {
                breadth = height[j];
            }
            area = max(area, length * breadth);
        }
    }
    return area;
}

// 2-pointer approach
int optimalContainer(vector<int> height)
{
    int left = 0, right = height.size() - 1, length, max_area = 0, breadth, area;
    while (left < right)
    {
        length = right - left;
        breadth = min(height[left], height[right]);
        area = length * breadth;
        max_area = max(max_area, area);
        if (height[left] < height[right])
        {
            left++;
        }
        else
        {
            right--;
        }
    }
    return max_area;
}

// Single Number.
int singleNumber(vector<int> nums)
{
    int ans = 0;
    for (int val : nums)
    {
        ans ^= val;
        cout << ans;
    }
    return ans;
}

int main()
{
    vector<int> height = {1, 8, 6, 2, 5, 4, 8, 3, 7};
    cout << bruteContainer(height) << endl;
    cout << optimalContainer(height) << endl;
    vector<int>nums = {4,1,2,1,2};
    cout << singleNumber(nums);
    return 0;
}