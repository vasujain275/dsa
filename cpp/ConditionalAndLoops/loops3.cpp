// Prime or Not
#include <iostream>
using namespace std;

int main(){
    int n;
    bool isPrime=1;
    int i=2;
    cout<<"Enter the Number: ";
    cin>>n;
    for (int i = 2; i < n; i++)
    {
        if (n%i==0){
            isPrime=0;
            break;
        }
    }
    if (isPrime=0)
    {
        cout<<"Not a Prime Number";
    }
    else{
        cout<<"It is a Prime Number";
    }
    return 0;
}