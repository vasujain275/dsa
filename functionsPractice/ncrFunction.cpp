#include <iostream>
using namespace std;
int fac(int a)
{
    int ans=1;
    for (int i = 1; i <= a; i++)
    {
        ans = ans*i;
    }
    return ans;
}
int ncr(int n,int r)
{
    int ans;
    ans = (fac(n))/((fac(r))*(fac(n-r)));
    return ans;
}

int main(){
    int n,r;
    cout<<"Enter the Value of n: ";
    cin>>n;
    cout<<"Enter the Value of r: ";
    cin>>r;
    cout<<"nCr of there Values is: "<<ncr(n,r);
    return 0;
}