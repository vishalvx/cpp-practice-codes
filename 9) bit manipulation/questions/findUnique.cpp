// QUESTION 1)  write program to find unique number in array where all numbers excepts one are prosent twice.
// QUESTION 2)  write program to find unique number in array where all numbers excepts two are prosent twice.
// QUESTION 3)  write program to find unique number in array where all numbers excepts one are prosent three times.

#include "bits/stdc++.h"

using namespace std;
// if any number occur twice then that two numbers xor=0
int findUnique(int arr[], int n)
{
    int xorSum = 0;
    for (int i = 0; i < n; i++)
    {
        xorSum = xorSum ^ arr[i];
    }
    return xorSum;
}

int main()
{
    int arr[] = {2, 4, 6, 3, 4, 6, 2};

    cout << findUnique(arr, 7) << endl;

    return 0;
}