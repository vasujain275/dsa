#include <iostream>
#include <math.h>
using namespace std;

int main(){
    int n,nbt,dgt;
    float a=0;
    cout<<"Enter the Number: ";
    cin>>n;
    for (int i = 0; n!=0; i++)
    {
        dgt = n&1;
        a = (pow(10,i)*dgt)+a;
        n=n>>1;
    }
    cout<<a;
    
    return 0;
}