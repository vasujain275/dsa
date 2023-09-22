/*
A B C D E
B C D E F
C D E F G
D E F G H
E F G H I
*/
#include <iostream>
using namespace std;

int main(){
    int n,m;
    cout<<"Enter the width of rectangle: ";
    cin>>n;
    cout<<"Enter the length of rectangle: ";
    cin>>m;
    int a =65;
    char b;
    for (int i = 0; i < n; i++)
    {
        a = 65+i;
        for (int j = 0; j < m; j++)
        {
            b=a;
            cout<<b<<" ";
            a++;
        }
        cout<<endl;
    }
    return 0;
}