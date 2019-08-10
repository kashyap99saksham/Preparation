#include<stdio.h>
extern int a;   //HERE  A IS ONLY DECLARED NOT DEFINED
int main()
{   
    int a = 20; //HERE IT IS DEFINED
    printf("%d",a);
}
//SO EXTERN IS USED TO SEPERATE DECLARED AND DEFINING VARIABLE


/*IN CASE OF FUNCTION
int foo(int arg1, char arg2);   IT IS OLNY DECLARED NOT DEFINED
 
 There’s an extern present at the beginning which is hidden and the compiler treats it as below.

extern int foo(int arg1, char arg2);
*/
