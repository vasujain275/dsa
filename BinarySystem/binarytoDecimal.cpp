#include <iostream>
#include <math.h>
using namespace std;

int main(){
    int n,nbt;
    float ans=0;
    cout<<"Enter the Value of n: ";
    cin>>n;
    for (int i = 0; n!=0; i++)
    {
        nbt=n%10;
        if (nbt==1)
        {
            ans=ans+(pow(2,i));
        }
        n=n/10;
    }
    cout<<ans;
    return 0;
}