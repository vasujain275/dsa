/*
D
CD
BCD
ABCD
*/
#include <iostream>
using namespace std;

int main(){
    int n;
    int a;
    char b;
    cout<<"Enter the Value of n: ";
    cin>>n;
    for (int i = 1; i <= n; i++)
    {
        a=65+n-i;
        b=a;
        for (int j = 1; j <= i; j++)
        {
            cout<<b;
            b++;
        }
        cout<<endl;
    }
    
    return 0;
}