#include <stdio.h>

//working, demonstrates pointer offset notation.

int main()
{
   int b[] = { 10, 20, 30, 40 }; 
   int *bPtr = b;                
   int i;                        
   int offset;                   

   printf( "\nPointer/offset notation\n" );

   for ( offset = 0; offset < 4; offset++ ) {
      printf( "*( bPtr + %d ) = %d\n", offset, *( bPtr + offset ) );  
      printf("   bPtr[+ %d ] = %d\n", offset, *bPtr ); 
   } 

   return 0;
}