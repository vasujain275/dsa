/*
1
2 1
3 2 1
4 3 2 1
5 4 3 2 1
*/

#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the Value of n: ";
    cin>>n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout<<i-j<<" ";
        }
        cout<<endl;
    }
    
    return 0;
}