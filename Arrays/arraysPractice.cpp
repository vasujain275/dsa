#include <iostream>
using namespace std;

void arrayPrint(int n[],int size)
{
    for (int i = 0; i < size; i++)
    {
        cout<<n[i]<<"\n";
    }
}

int main(){
    int a[10]={1,2,3,4,5,6,7,8,9,10};
    cout<<"\nPrinting the Array Before:\n";
    arrayPrint(a,10);
    for (int i = 0; i < 10; i++)
    {
        a[i] = 1;
    }
    cout<<"\nPrinting the Array After:\n";
    arrayPrint(a,10);
    return 0;
}