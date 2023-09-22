#include <iostream>
using namespace std;

void printArr(int arr[],int size)
{
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<"  ";
    }
}

void swapArray(int arr[],int size)
{
    int a;
    for (int i = 0; i < size-1;i+=2)
    {
        a=arr[i];
        arr[i]=arr[i+1];
        arr[i+1]=a;
    }
    
}

int main(){
    int arr[5];
    cout<<"Enter the Values for Array: ";
    for (int i = 0; i < 5; i++)
    {
        cin>>arr[i];
    }
    swapArray(arr,5);
    printArr(arr,5);
    return 0;
}