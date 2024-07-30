#include <iostream>
#include <math.h>
using namespace std;

int main(){
    int n,nbt;
    long long int a,b;
    cout<<"Enter the Number(Only Negative): ";
    cin>>n;
    n = n - (2*n);
    
    for (int i = 0; n!=0; i++)
    {
        nbt = n&1;
        if (nbt==1)
        {
            nbt=0;
        }
        else
        {
            nbt=1;
        }
        a = (pow(10,i)*nbt)+a;
        n=n>>1;
    }
    for (int i = 0; a!=0; i++)
    {
        nbt = a&1;
        if(i=0)
        {
            nbt=1;
        }
        else if (nbt==1)
        {
            nbt=0;
        }
        else
        {
            nbt=1;
        }
        b = (pow(10,i)*nbt)+b;
        a=a>>1;
    }
    cout<<b;
    return 0;
}