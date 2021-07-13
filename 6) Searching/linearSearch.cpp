#include <iostream>
using namespace std;
int linearSearch(int arr[], int size, int key)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == key)
        {
            return i;
        }
    }
    return -1;
}
int main()
{
    int arr[6] = {6, 8, 12, 4, 2, 7};
    cout << linearSearch(arr, 6, 12) + 1 << " at index" << endl;
}
