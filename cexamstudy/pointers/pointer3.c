#include <stdio.h>

main()
{
 

   int a;        /* a is an integer */
   int *aPtr;    /* aPtr is a pointer to an integer */

   a = 7;
   aPtr = &a;    /* aPtr set to address of a */

   printf( "The address of a is %p"
           "\nThe value of aPtr is %p", &a, aPtr );

   printf( "\n\nThe value of a is %d"   
           "\nThe value of *aPtr is %d", a, *aPtr );

   printf( "\n\nShowing that * and & are complements of "
           "each other\n&*aPtr = %p"   
           "\n*&aPtr = %p\n\n", &*aPtr, *&aPtr );

  int number = 0;                 
  int *pointer = NULL;            

  number = 10;

  pointer = &number;  /*Store the address of number in pointer   */ 

  printf("pointer's address: %p", &pointer);
  printf("\npointer = %p\n", pointer );
  printf("\nnumber address = &number = %d\n", &number);


    // The address of a is 9a37c
    // The value of aPtr is 9a37c

    // The value of a is 7
    // The value of *aPtr is 7

    // Showing that * and & are complements of each other
    // &*aPtr = 9a37c
    // *&aPtr = 9a37c





  // changing the value of  variable through a pointer
    long num1 = 0;
    long num2 = 0;
    long *pnum = NULL;

    pnum = &num1; //setting pointer to the value of num1                         
    *pnum = 2;                                 
    ++num2; // adding to num2                                    
    num2 += *pnum; //num2 should equal 4                            

    pnum = &num2;                              
    ++*pnum;                                   

    printf ("\nnum1 = %ld  num2 = %ld  *pnum = %ld  *pnum + num2 = %ld\n",
                                      num1, num2, *pnum, *pnum + num2);
}