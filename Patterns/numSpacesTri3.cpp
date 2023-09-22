/*
1 2 3 4 5
  2 3 4 5
    3 4 5
      4 5
        5
*/
#include <iostream>
using namespace std;

int main(){
    int n,k;
    cout<<"Enter the Value of n: ";
    cin>>n;
    for (int i = 1; i <= n; i++)
    {
        for (int l = 1; l <= i-1; l++)
        {
            cout<<"  ";
        }
        k=i;
        for (int j = 0; j < n-i+1; j++)
        {
            cout<<k<<" ";
            k++;
        }
        cout<<endl;
    }
    
    return 0;
}