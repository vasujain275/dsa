#include <iostream>
using namespace std;

int sumArray(int arr[],int size)
{
    int sum=0;
    for (int i = 0; i < size; i++)
    {
        sum += arr[i];
    }
    return sum;
}
int main(){
    int arr[5];
    cout<<"Enter the Values for Array:\n";
    for (int i = 0; i < 5; i++)
    {   
        cin>>arr[i];
    }
    cout<<"Sum of Array's Elements is: "<<sumArray(arr,5);
    return 0;
}