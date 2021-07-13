#include "bits/stdc++.h"

using namespace std;

bool palindrome(char arr[], int n)
{
    bool isPalindrome = 1;
    for (int i = 0; i <= n / 2; i++)
    {
        if (arr[i] != arr[n - i - 1])
        {
            isPalindrome = 0;
            break;
        }
    }
    return isPalindrome;
}

int main()
{
    int n;
    cin >> n;

    char ca[n + 1];
    cin >> ca;

    // int i = 0;
    // while (ca[i] != '\0')
    // {
    //     cout << ca[i] << endl;
    //     i++;
    // }

    cout << palindrome(ca, n) << endl;

    return 0;
}