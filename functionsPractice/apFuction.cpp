#include <iostream>
using namespace std;

int ap(int n)
{
    return ((3*n)+7);
}

int main(){
    int n;
    cout<<"Enter the Value of n: ";
    cin>>n;
    cout<<"The nth term of AP is: "<<ap(n);
    return 0;
}