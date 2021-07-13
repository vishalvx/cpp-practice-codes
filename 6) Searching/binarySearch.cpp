#include <iostream>

using namespace std;
int binarySearch(int arr[], int size, int key)
{
    int start = 0, end = size - 1, mid;
    while (start <= end)
    {
        mid = start + end / 2;
        if (arr[mid] == key)
        {
            return mid;
        }
        else if (arr[mid] < key)
        {
            end = mid;
        }
        else
        {
            start = mid;
        }
    }
    return -1;
}

int main()
{
    int arr[6] = {6, 8, 12, 4, 2, 7};
    cout << binarySearch(arr, 6, 0) + 1 << " at index" << endl;
}