/*
* * * * *
* * * *
* * *
* *
*
*/
#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the Value of n: ";
    cin>>n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j < n-i+1; j++)
        {
            cout<<"* ";
        }
        for (int k = 0; k < i; k++)
        {
            cout<<"  ";
        }
        cout<<endl;
    }
    
    return 0;
}