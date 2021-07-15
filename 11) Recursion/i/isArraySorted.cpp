#include "bits/stdc++.h"

using namespace std;

bool isSorted(int arr[], int n)
{
    if (n == 1)
    {
        return true;
    }
    bool restArray = isSorted(arr + 1, n - 1);
    return (restArray && arr[0] < arr[1]);
}

int main()
{
    int arr[] = {1, 9, 5, 7, 9};
    cout << isSorted(arr, 5) << endl;
    return 0;
}