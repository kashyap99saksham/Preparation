#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    char ch,s[100],sen[100];
    scanf("%c",&ch);
    scanf("%s",&s);
    scanf(" %[^\n]%*c",sen);
    // or we can use 
    // gets(sen);
    printf("%c\n",ch);
    printf("%s\n",s);
    printf("%s",sen);
    return 0;

}

