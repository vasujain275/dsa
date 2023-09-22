// Find sum of all even numbers from 1 to n
#include <iostream>
using namespace std;

int main(){
    int n;
    int i=2;
    int sum=0;
    cout<<"Enter the Value of n ";
    cin>>n;
    while (i<=n)
    {
        sum = sum+i;
        i = i+2;
    }
    cout<<"Sum is"<<sum;
    return 0;
}