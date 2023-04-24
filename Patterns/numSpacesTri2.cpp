/*
        1 
      2 2 
    3 3 3 
  4 4 4 4 
5 5 5 5 5 
*/
#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the Value of n: ";
    cin>>n;
    for (int i = 1; i <= n; i++)
    {
        for (int l = 1; l <= n-i; l++)
        {
            cout<<"  ";
        }
        for (int j = 0; j < i; j++)
        {
            cout<<i<<" ";
        }
        cout<<endl;
    }
    
    return 0;
}