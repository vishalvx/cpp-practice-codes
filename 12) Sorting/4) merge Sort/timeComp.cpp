#include "bits/stdc++.h"

#include <sys/time.h>

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

/*
MAIN Function
*/
int main()
{
    unsigned int size;
    struct timeval start, end;

    printf("Enter size of array : ");
    scanf("%u", &size);

    int arr[size];

    for (int i = 0; i < size; i++)
    {
        arr[i] = rand() % size; // avg
        // arr[i] = i; //best
        // arr[i]=size-i; //worst
    }
    // int arr[5] = {50, 30, 20, 10, 40};

    /*start timer.*/
    gettimeofday(&start, NULL);
    mergeSort(arr, 0, size - 1);

    /*Stop timer.*/

    gettimeofday(&end, NULL);

    double timeTaken;

    timeTaken = (end.tv_sec - start.tv_sec) * 1e6;

    timeTaken = (timeTaken + (end.tv_usec - start.tv_usec)) * 1e-6;

    printf("\nTime taken for merge Sort is: %.5f ", timeTaken);

    return 0;
}