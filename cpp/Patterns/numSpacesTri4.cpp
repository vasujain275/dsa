/*
      1
    2 3
  4 5 6
7 8 9 10
*/
#include <iostream>
using namespace std;

int main(){
    int n,num;
    cout<<"Enter the Value of n: ";
    cin>>n;
    num=1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n-i; j++)
        {
            cout<<"  ";
        }
        for (int k = 1; k <= i; k++)
        {
            cout<<num<<" ";
            num++;
        }
        cout<<endl;
    }
    
    return 0;
}