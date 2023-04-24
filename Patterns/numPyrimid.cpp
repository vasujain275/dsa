/*
        1
      1 2 1
    1 2 3 1 2
  1 2 3 4 1 2 3
1 2 3 4 5 1 2 3 4
*/
#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the Value of n: ";
    cin>>n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n-i; j++)
        {
            cout<<"  ";
        }
        for (int k = 1; k <= i; k++)
        {
            cout<<k<<" ";
        }
        for (int m = 1; m <= i-1; m++)
        {
            cout<<m<<" ";
        }
        for (int p = 0; p < n-i; p++)
        {
            cout<<"  ";
        }
        cout<<endl;
    }
    
    return 0;
}