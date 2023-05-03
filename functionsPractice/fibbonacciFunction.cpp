// 0 1 1 2 3 5 8 13 21 34 55....
#include <iostream>
using namespace std;

int fib(int n)
{
    int ans=0,a=0,b=1;
    for (int i = 1; i <= n-2; i++)
    {
        ans=a+b;
        a=b;
        b=ans;
    }
    return ans;
}

int main(){
    int n;
    cout<<"Enter the Value of n: ";
    cin>>n;
    cout<<"The Value of nth fib. term is: "<<fib(n);
    return 0;
}