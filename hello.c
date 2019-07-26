// Sample Input 0
// Welcome to C programming.
// -----------------------------------
// Sample Output 0
// Hello, World!
// Welcome to C programming.



#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
	
    char s[100];
    gets(s);
// 	OR
//   scanf("%[^\n]%*c", s);     --->Here, [] is the scanset character. ^\n stands for taking input until a newline isn't encountered. Then, with this %*c, it reads the newline character and here, the used * indicates that this newline character is discarded.
    printf("Hello, World!\n%s", s);
    
    return 0;
}
