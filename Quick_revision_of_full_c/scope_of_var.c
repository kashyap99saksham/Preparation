#include<stdio.h>
int main() 
{ 
    int x = 1, y = 2, z = 3; 
    printf(" x = %d, y = %d, z = %d \n", x, y, z);  //1,2,3 
    { 
        int x = 10; 
        float y = 20; 
        printf(" x = %d, y = %f, z = %d \n", x, y, z); //10,20.000000,3
        { 
                int z = 100; 
                printf(" x = %d, y = %f, z = %d \n", x, y, z); //10,20.000000,100
        } 
    } 
    return 0; 
} 

