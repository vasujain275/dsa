#include <iostream>
using namespace std;

int binarySearch(int arr[], int key, int size)
{
    int start = 0;
    int end = size - 1;
    int mid = start + ((end-start)/2);

    while (start <= end)
    {
        if (arr[mid]==key)
        {
            return mid;
        }
        if (arr[mid]>key)
        {
            end = mid-1;
        }
        if (arr[mid]<key)
        {
            start = mid+1;
        }
        mid = start + ((end-start)/2);
    }
    return -1;
}

void printArr(int arr[],int size)
{
    for (int i = 0; i < size-1; i++)
    {
        cout<<arr[i]<<" ";
    }
}

int main()
{
    int arr[8] = {1, 2, 3, 4, 5, 6, 7, 8};
    cout<<binarySearch(arr,7,8);
    return 0;
}