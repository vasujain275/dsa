#include <iostream>
using namespace std;

int main()
{
    int a;
    char ch;
    cout << "Enter the Char/Number : "<<endl;
    cin >>ch;
    a = ch;
    if (a>=97 && a<=122){
        cout << "It is Lower case Char"<<endl;
    }
    else if (a>=65 && a<=90){
        cout << "It is Upper case Char"<<endl;
    }
    else{
        cout << "It is a Number"<<endl;
    }
    
}