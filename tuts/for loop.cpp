#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    int a;
    int b;
    scanf("%d %d",&a,&b);
    for (int n = a; n <= b; n++)
    {
        if (n==1)
    {
        printf("one");
        printf("\n");
    }
    else if(n==2)
    {
        printf("two");
        printf("\n");
    }
    else if(n==3)
    {
        printf("three");
        printf("\n");
    }
    else if(n==4)
    {
        printf("four");
        printf("\n");
    }
    else if(n==5)
    {
        printf("five");
        printf("\n");
    }
    else if(n==6)
    {
        printf("six");
        printf("\n");
    }
    else if(n==7)
    {
        printf("seven");
        printf("\n");
    }
    else if(n==8)
    {
        printf("eight");
        printf("\n");
    }
    else if(n==9)
    {
        printf("nine");
        printf("\n");
    }
    else
    {
        if ((n%2)==0)
        {
            printf("even");
            printf("\n");
        }
        else
        {
            printf("odd");
            printf("\n");
        }
    }
    }
    

    return 0;
}