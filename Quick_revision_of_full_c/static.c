#include<stdio.h>
extern int a;
int main()
{   
    static int a=10;    //by default it is defined 0 in c
    {
        int a = 10;     //this is not same as static var
        printf("%d",a);     //10
    }
    printf("%d",a);     //20
}