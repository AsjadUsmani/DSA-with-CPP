#include <iostream>
#include <algorithm>
using namespace std;

bool isPalindrome(string str)
{
    int start = 0;
    int end = str.length() - 1;

    while (start < end)
    {
        if (str[start] != str[end])
            return false;
        start++;
        end--;
    }

    return true;
}

int main()
{
    string str;
    getline(cin, str);
    if (isPalindrome(str))
        cout << "String is Palindrome.";
    else
        cout << "String is not a palindrome String.";
    return 0;
}