#include <iostream>
using namespace std;

void reverseArr(int arr[],int size)
{
    int a;
    for (int start = 0, end=size-1; start <= end; start++,end--)
    {
        a=arr[start];
        arr[start]=arr[end];
        arr[end]=a;
    }
}

void printArr(int arr[],int size)
{
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<"  ";
    }
}

int main(){
    int n[4];
    cout<<"Enter the values for array: \n";
    for (int i = 0; i < 4; i++)
    {
        cin>>n[i];
    }
    reverseArr(n,4);
    printArr(n,4);

    return 0;
}