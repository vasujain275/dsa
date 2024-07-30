// Have to print Fibonacci Series
// 0,1,1,2,3,5,8,13,21,34........

#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the no of elements you want to print: ";
    cin>>n;
    int a = 0;
    int b=1;
    cout<<a<<" "<<b<<" ";
    for (int i = 0; i < n; i++)
    {
        int nextNum = a+b;
        cout<<nextNum<<" ";
        a=b;
        b=nextNum;
    }
    

    return 0;
}