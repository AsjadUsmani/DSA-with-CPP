#include <iostream>
using namespace std;

// Binary Exponentiation
// Note: Koi bhi agar decimal number n hai to uski binart number me total digits log(n)base2 + 1 digit honge atmost <=
double pow(int x, int n)
{
    if (n == 0)
        return 1;
    if (x == 1)
        return 1;
    if (x == 0)
        return 0;
    long int binForm = n;
    double ans = 1;
    if (n < 0)
    {
        binForm = -binForm;
        x = 1 / x;
    }
    while (binForm > 0)
    {
        if (binForm % 2 == 1)
        {
            ans *= x;
        }
        x *= x;
        binForm /= 2;
    }
    return ans;
}

// My-Failed
double another(int x, int n)
{
    double mul = 1;
    if (n > 0)
    {
        for (int i = 0; i < n; i++)
        {
            mul *= x;
        }
    }
    else if (n < 0)
    {
        for (int i = n + 1; i <= 0; i++)
        {
            mul *= 1 / x;
        }
    }
    return mul;
}

int main()
{
    cout << pow(2.0, 5) << endl;
    return 0;
}