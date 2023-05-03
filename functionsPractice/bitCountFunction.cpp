#include <iostream>
using namespace std;

int setBitCount(int n)
{
    int a,count=0;
    for (int i = 0; n!=0 ; i++)
    {
        a=n&1;
        if (a==1)
        {
            count++;
        }
        n=n>>1;
    }
    
}

int main(){
    int a,b;
    cout<<"Enter the Value of a: ";
    cin>>a;
    cout<<"Enter the Value of b: ";
    cin>>b;
    cout<<"Total set bits in a and b are: "<<(setBitCount(a)+setBitCount(b));
    return 0;
}