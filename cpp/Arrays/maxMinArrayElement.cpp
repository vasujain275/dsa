#include <iostream>
using namespace std;

int main(){
    int arr[5]={45,897,74,6,7};
    int max = arr[0];
    int min = arr[0];
    for (int i = 0; i < 5; i++)
    {
        if (max<arr[i])
        {
            max=arr[i];
        }
        if (min>arr[i])
        {
            min=arr[i];
        }
    }
    cout<<"Max. Value: "<<max<<endl<<"Min. Value: "<<min<<endl; 
    return 0;
}