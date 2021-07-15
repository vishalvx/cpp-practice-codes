#include "bits/stdc++.h"

using namespace std;

int lastOccurence(int arr[], int n, int key)
{
    if (arr[n] == key)
    {
        return n;
    }
    if (n == 0)
    {
        return -1;
    }
    return lastOccurence(arr, n - 1, key);
}
int firstOccurence(int arr[], int n, int i, int key)
{

    if (arr[i] == key)
    {
        return i;
    }
    if (i == n)
    {
        return -1;
    }
    return firstOccurence(arr, n, i + 1, key);
}

int main()
{
    int arr[] = {1, 3, 5, 6, 5, 9};
    cout << lastOccurence(arr, 6, 5) + 1 << endl;
    cout << firstOccurence(arr, 6, 0, 5) + 1 << endl;
    return 0;
}