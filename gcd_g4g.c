#include<stdio.h>
int main()
{
    int n,i,j,n1,n2,n3,n4,gcd1,gcd2;
    scanf("%d",&n);
        scanf("%d %d\n",&n1,&n2);
        scanf("%d %d",&n3,&n4);
   
    for(j=0;j<n2;j++)
    {
        if(n1%j==0&&n2%j==0)
            gcd1=j;
    }
    printf("%d\n",gcd1);

    // j=0;
    for(j=0;j<n4;j++)
    {
        if(n3%j==0&&n4%j==0)
            gcd2=j;
    }
        printf("%d",gcd2);
}
