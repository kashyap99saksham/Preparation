#include <stdio.h>

int greatest()
{
    int i,great=0,n;
    for(i=0;i<4;i++)
    {
        scanf("%d",&n);
        if(n>great)
        {
            great = n;
        }
    }
    return great;
}
int main() 
{
    // int a,b,c,d;  
    // scanf("%d,%d,%d,%d",a,b,c,d);
    int g = greatest();
    printf("%d",g);
    return 0;
}

