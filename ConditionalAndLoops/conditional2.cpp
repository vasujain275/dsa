// Celsius to Fahrenheit Converter 
// (x × 9/5) + 32 = y 
// x is in Celsius 
// y is in Fahrenheit 

#include <iostream>
using namespace std;

int main(){
    double c;
    double f;
    cout<<"Enter the temp in Celsius: ";
    cin>>c;
    f = ((c*(9/5)) + 32);
    cout<<"Temp in Fahrenheit is :"<<f;
    return 0;
}