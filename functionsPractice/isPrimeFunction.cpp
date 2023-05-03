#include <iostream>
using namespace std;

bool isPrime(int n)
{
    for (int i = 2; i < n; i++)
    {
        if ((n%i)==0)
        {
            return true;
        }
    }
    return false;
}

int main(){
    int n;
    cout<<"Enter the Number: ";
    cin>>n;
    if ((isPrime(n))==false)
    {
        cout<<"It is a Prime Number";
    }
    else{
        cout<<"It is a Composite Number";
    }
    return 0;
}