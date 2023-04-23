// Prime or Not
#include <iostream>
using namespace std;

int main(){
    int n;
    int i=2;
    cout<<"Enter the Number: ";
    cin>>n;
    while(i<n){
        if (n%i==0){
            cout<<"It is not Prime";
        }
        i++;
    }
    cout<<"It is a prime number";
    return 0;
}