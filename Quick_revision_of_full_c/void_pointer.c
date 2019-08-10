#include<stdio.h>
// extern int a;
int main()
{   
    int a=10;
    void *p = &a;
    // printf("%d",*p);    //HERE COMES ERROR COZ P IS NOT DEFINED AS INT SO ...
    printf("%d",*(int *)p);     //(INT *) DECLARE THAT P IS CARRING INT TYPE OF VAR AND * IS USE FOR PRINT ITS VALUE
}