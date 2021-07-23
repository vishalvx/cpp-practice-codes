#include "bits/stdc++.h"

using namespace std;

void swap(int arr[], int a, int b)
{
    int temp = arr[a];
    arr[a] = arr[b];
    arr[b] = temp;
}

void dnfSort(int arr[], int size)
{

    int mid = 0;
    int low = 0;
    int high = size - 1;
    while (mid <= high)
    {
        if (arr[mid] == 0)
        {
            swap(arr, low, mid);
            low++;
            mid++;
        }
        if (arr[mid] == 1)
        {
            mid++;
        }
        if (arr[mid] == 2)
        {
            swap(arr, mid, high);
            high--;
        }
    }
}

int main()
{
    int arr[] = {1, 1, 2, 0, 0, 1, 2, 2, 1, 0};
    int size = sizeof(arr) / sizeof(arr[1]);

    dnfSort(arr, size);
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}