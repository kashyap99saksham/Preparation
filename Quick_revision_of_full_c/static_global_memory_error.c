// PROGRAM 1 
#include <stdio.h> 
#include <stdlib.h> 

int main(void) 
{ 
  static int *p = (int*)malloc(sizeof(p)); 
  *p = 10; 
  printf("%d", *p); 
} 
//error in c coz static var get memory  by compiler in compile time but here we give run time memory
\N

// PROGRAM 2 
#include <stdio.h> 
#include <stdlib.h> 
int *p = (int*)malloc(sizeof(p)); 
int main(void) 
{ 
	*p = 10; 
	printf("%d", *p); 
} 
//error in c coz global var are also get memory in comile time and here run time memory
