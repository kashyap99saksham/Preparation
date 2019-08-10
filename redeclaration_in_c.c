// Program 1 
int main() 
{ 
  int x; 
  int x = 5; 
  printf("%d", x); 
  return 0; 
} 
//error
\N
// Program 2 
int x; 
int x = 5; 

int main() 
{ 
  printf("%d", x); 
  return 0; 
} 

//No Error
C allows a global variable to be declared again when first declaration doesn’t initialize the variable.
\N

int x = 5; 
int x = 10; 
int main() 
{ 
  printf("%d", x); 
  return 0; 
}
//ERROR COMES : COZ NO REDFINATION IS ALLOWED IN C
/N
