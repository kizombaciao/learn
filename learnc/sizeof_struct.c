// C program to illustrate 
// size of struct 
#include <stdio.h> 
  
int main() 
{ 
  
    struct A { 
  
        // sizeof(int) = 4 
        int x; 
        // Padding of 4 bytes 
  
        // sizeof(double) = 8 
        double z; 
  
        // sizeof(short int) = 2 
        short int y; 
        // Padding of 6 bytes 
    }; 
  
    printf("Size of struct: %lu", sizeof(struct A)); 
  
    return 0; 
} 

/*

> Size of struct: 24

The sizeof for a struct is not always equal to 
the sum of sizeof of each individual member. 
This is because of the padding added by the compiler 
to avoid alignment issues. Padding is only added 
when a structure member is followed by a member 
with a larger size or at the end of the structure.

Different compilers might have different alignment constraints 
as C standards state that alignment of structure 
totally depends on the implementation.
*/

