#include <iostream>
using namespace std;

int main(){
    int a,b,op;
    cout<<"Welcome to VJ Calculator 2023!\nEnter the Value of 1st Num: ";
    cin>>a;
    cout<<"Enter the Value of 2nd Num: ";
    cin>>b;
    cout<<"What Operation do you want to perform?(1/2/3/4)\n1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\n> ";
    cin>>op;
    switch (op)
    {
    case 1:
        cout<<a+b;
        break;
    case 2:
        cout<<a-b;
        break;
    case 3:
        cout<<a*b;
        break;
    case 4:
        cout<<a/b;
    default:
        cout<<"Enter Valid Operator! (1/2/3/4)";
        break;
    }
    return 0;
}