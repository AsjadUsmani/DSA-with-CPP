#include <iostream>
#include <vector>
using namespace std;


//optimized TC(n) & SC(O(1))
vector<int> optimizedProduct(vector<int> nums)
{
    int n = nums.size();
    vector<int> output(n, 1);
    // vector<int> prefix(n, 1);
    // vector<int> suffix(n, 1);
    int prefix = 1;
    for (int i = 1; i < n; i++)
    {
        output[i] = output[i - 1] * nums[i - 1];
    }
    int suffix = 1;
    for (int i = n - 2; i >= 0; i--)
    {
        suffix *= nums[i + 1];
        output[i] *= suffix;
    }
    return output;
}

// slightly optimized(n) but space-complexity(n);
vector<int> prefSuffProduct(vector<int> nums)
{
    int n = nums.size();
    vector<int> output(n, 1);
    vector<int> prefix(n, 1);
    vector<int> suffix(n, 1);
    prefix[0] = 1;
    for (int i = 1; i < n; i++)
    {
        prefix[i] = prefix[i - 1] * nums[i - 1];
    }
    suffix[n - 1] = 1;
    for (int i = n - 2; i >= 0; i--)
    {
        suffix[i] = suffix[i + 1] * nums[i + 1];
    }
    for (int i = 0; i < n; i++)
    {
        output[i] = prefix[i] * suffix[i];
    }
    return output;
}

// Brute-force(n^2)
vector<int> bruteProduct(vector<int> nums)
{
    vector<int> output;
    for (int i = 0; i < nums.size(); i++)
    {
        int product = 1;
        for (int j = 0; j < nums.size(); j++)
        {
            if (i != j)
            {
                product *= nums[j];
            }
        }
        output.push_back(product);
    }
    return output;
}

int main()
{

    return 0;
}