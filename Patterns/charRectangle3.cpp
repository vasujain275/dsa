/*
A B C D E
F G H I J
K L M N O
P Q R S T
U V W X Y
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