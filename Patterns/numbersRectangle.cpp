/*
111111
222222
333333
444444
*/
#include <iostream>
using namespace std;

int main(){
    int n,m;
    cout<<"Enter the width of rectangle: ";
    cin>>n;
    cout<<"Enter the length of rectangle: ";
    cin>>m;
    for (int i=0;i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout<<i+1;
        }
        cout<<endl;
    }
    
    return 0;
}