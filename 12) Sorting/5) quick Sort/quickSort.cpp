#include "bits/stdc++.h"

using namespace std;

void swap(int arr[], int a, int b)
{
    int temp = arr[a];
    arr[a] = arr[b];
    arr[b] = temp;
}

int partition(int arr[], int start, int end)
{

    int pivot = arr[end];
    int i = start - 1;
    for (int j = start; j < end ; j++)
    {
        if (arr[j] < pivot)
        {
            i++;
            swap(arr, i, j);
        }
    }
    swap(arr, i + 1, end);
    return i + 1;
}

void quickSort(int arr[], int start, int end)
{
    if (start < end)
    {

        int pivotIdx = partition(arr, start, end);

        //Dividing array by pivot element index
        quickSort(arr, start, pivotIdx - 1);
        quickSort(arr, pivotIdx + 1, end);
    }
}

int main()
{
    int arr[] = {9, 7, 5, 3, 1};

    quickSort(arr, 0, 4);
    for (auto &&i : arr)
    {
        cout << i << " ";
    }

    return 0;
}