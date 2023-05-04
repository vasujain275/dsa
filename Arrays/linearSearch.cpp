#include <iostream>
using namespace std;

int main(){
    int arr[10] = {7,75,1,546,86,489,36,485,9,68};

    for (int i = 0; i < 10; i++)
    {
        if (arr[i]==1)
        {
            cout<<"1 is present at "<<i<<" index";
        }
    }
    

    return 0;
}