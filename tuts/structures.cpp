#include <iostream>
using namespace std;
typedef struct Employee
{
    int eId;
    char favChar;
    float salary;
}ep;

int main(){
    ep vasu;
    vasu.eId = 1;
    vasu.favChar='a';
    vasu.salary=900000000;
    printf("%d %c",vasu.eId,vasu.favChar);
    cout<<endl;
    return 0;
    int* a = &vasu.eId;
    cout<<*a;
}