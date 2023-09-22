#include <iostream>
using namespace std;

void arrayPrint(int n[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << n[i] << "\n";
    }
}

int main()
{
    int arr[9] = {0, 2, 2, 1, 0, 1, 1, 0, 2};
    int n = 9;
    for (int i = 0, j = n - 1; i < j;)
    {
        while (arr[i] == 0 && i < j)
        {
            i++;
        }
        while (arr[j] == 2 && i < j)
        {
            j--;
        }
        while(arr[i]==2&&arr[j]==0&&i<j)
        {
            swap(arr[i],arr[j]);
            i++;
            j--;

        }
        
    }
    arrayPrint(arr, 9);
}