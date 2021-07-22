#include "bits/stdc++.h"

using namespace std;

void merge(int arr[], int start, int mid, int end)
{
    int size1 = mid - start + 1;
    int size2 = end - mid;

    /*storing elements into 2 array */
    int a[size1], b[size2];

    for (int i = 0; i < size1; i++)
    {
        a[i] = arr[start + i];
    }
    for (int j = 0; j < size2; j++)
    {
        b[j] = arr[mid + j + 1];
    }

    /*campare 2 array each elements and store in main array */

    int i = 0;
    int j = 0;
    int k = start;
    while (i < size1 && j < size2)
    {
        if (a[i] <= b[j])
        {
            arr[k] = a[i];
            i++;
        }
        else
        {
            arr[k] = b[j];
            j++;
        }
        k++;
    }

    while (i < size1)
    {
        arr[k] = a[i];
        i++;
        k++;
    }

    while (j < size2)
    {
        arr[k] = b[j];
        j++;
        k++;
    }
}

void mergeSort(int arr[], int start, int end)
{

    int mid = ((start + end) / 2);
    if (start < end)
    {

        /*dividing*/
        mergeSort(arr, start, mid);
        mergeSort(arr, mid + 1, end);

        /*Merging */
        merge(arr, start, mid, end);
    }
}

int main()
{
    int arr[] = {6, 4, 3, 2, 1};
    mergeSort(arr, 0, 4);
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}