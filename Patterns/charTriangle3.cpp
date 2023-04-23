/*
A
B C
C D E
D E F G
E F G H I
*/
#include <iostream>
using namespace std;

int main(){
    int n;
    int a=65;
    char b;
    cout<<"Enter the Value of n:";
    cin>>n;
    for (int i = 1; i <= n; i++)
    {
        a = 65+i-1;
        for (int j = 0; j < i; j++)
        {
            b=a;    
            cout<<b<<" ";
            a++;
        }
        cout<<endl;
    }
    
    return 0;
}