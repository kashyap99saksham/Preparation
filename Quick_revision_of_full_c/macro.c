#include <stdio.h> 
#define MULTIPLY(a, b) a*b 
int main() 
{ 
	// The macro is expended as 2 + 3 * 3 + 5, not as 5*8 	[so use (a)*(b)]
	printf("%d", MULTIPLY(2+3, 3+5)); 
	return 0; 
} 
// Output: 16
