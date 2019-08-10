#include<stdio.h>
int main()
{
    char a = 100;       //int_promotion
    printf("%d",a);
    int b = 'c';        //char promotion
    printf("%c",b);
}
// output
//100
//c
//jitna size hoga datatype ka utna vo store kra lega but jyada hua to nhi hoga promotion
