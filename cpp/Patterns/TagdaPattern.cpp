/*
1 2 3 4 5 5 4 3 2 1 
1 2 3 4 * * 4 3 2 1 
1 2 3 * * * * 3 2 1 
1 2 * * * * * * 2 1 
1 * * * * * * * * 1 
*/
#include <iostream>
using namespace std;

int main(){
    int n,num;
    cout<<"Enter the Value of n: ";
    cin>>n;
    for (int i = 1; i <= n; i++)
    {
        num=n-i+1;
        for (int j = 1; j <= n-i+1; j++)
        {
            cout<<j<<" ";
        }
        for (int k = 1; k <= i-1; k++)
        {
            cout<<"* * ";
        }
        for (int m = 1; m <= n-i+1; m++)
        {
            cout<<num<<" ";
            num--;
        }
        cout<<endl;
    }
    
    return 0;
}