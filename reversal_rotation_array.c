#include<stdio.h>
int main()
{
    int i,j,n,d,arr[100],brr[100],crr[100],drr[100];
    printf("Enter number of Elemets\n");
    scanf("%d",&n);
    printf("Enter elements in array\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("How many elements you want to shift\n");
    scanf("%d",&d);
    i=0;

    for(i=d-1,j=0;i>=0;i--,j++)
    {
        brr[j] = arr[i];
    }
    i=0;j=0;
    for(i=0;i<d;i++)
    {
        arr[i] = brr[i];
    }

    // for(i=0;i<n;i++)
    // {
    //     printf("%d ",arr[i]);
    // }
    // printf("\n");
    i=0;j=0;
    // int count = 0;
    for(i=n-1,j=0;i>=d;i--,j++)
    {
        // count++;
        crr[j] = arr[i];
    }
    // printf("%d\n",count);
    for(i=d,j=0;i<n;i++,j++)
    {
        arr[i] = crr[j];
    }
    // for(i=0;i<n;i++)
    // {
    //     printf("%d",arr[i]);
    // }


    i=0;j=0;
    for(i=n-1,j=0;i>=0;i--,j++)
    {
        drr[j] = arr[i];
    }
    for(i=0;i<n;i++)
    {
        arr[i] = drr[i];
    }
    i = 0;
    for(i=0;i<n;i++)
    {
        printf("%d",arr[i]);
    }    
}