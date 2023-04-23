// Sum of all numbers from 1 to n 
#include <iostream>
using namespace std;

int main(){
    int n;
    int i=0;
    int sum=0;
    cout<<"Enter the value of n: ";
    cin>>n;
    while (i<=n)
    {
        sum = sum+i;
        i++;
    }
    cout << "Sum is "<< sum;
    return 0;
}