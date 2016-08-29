/**5. (6 marks) Using the switch statement, write a program that counts and prints the
number of each different letter grade user entered. Assume we have only five
different grades – “A” / “a”, “B” / “b”, “C” / “c”, “D” / “d”, “E” / “e”. You need
to provide a special character to end the input (user needs to enter this character to
end the input). You can only use the following variables.
**/

#include <stdio.h>
int main( void )
{
  char grade; /* current grade */
  int aCount = 0; /* total a grades */
  int bCount = 0; /* total b grades */
  int cCount = 0; /* total c grades */
  int dCount = 0; /* total d grades */
  int eCount = 0; /* total e grades */

  /* prompt user for grades */
  printf( "Enter the letter grades.\n");
  printf( "Enter the r character to end input.\n" );
  /* loop while not end of file */
  while (grade != 'r'){
  fflush(stdin);
  scanf("%c", &grade);
  printf("char input was %c \n ",grade);
    /* determine which grade was input */
    switch ( grade ) {
      case 'A': /* grade was uppercase A */
      case 'a': /* grade was lowercase a */
        ++aCount; /* update grade A counter */
        break; 
      case 'B': /* grade was uppercase B */
      case 'b': /* grade was lowercase b */
        ++bCount; /* update grade B counter */
        break; 
      case 'C': /* grade was uppercase C */
      case 'c': /* grade was lowercase c */
        ++cCount; /* update grade C counter */
        break; 
      case 'D': /* grade was uppercase D */
      case 'd': /* grade was lowercase d */
        ++dCount; /* update grade C counter */
        break; 
      case 'E': /* grade was uppercase F */
      case 'e': /* grade was lowercase f */
        ++eCount; /* update grade C counter */
        break; 
      default: /* catch all other characters */
        printf("Incorrect letter grade entered.");
        printf("Enter a new grade.\n");
        break; /* optional, will exit switch anyway */
    } 
  }
  /* output totals for each grade */
  printf( "\nThe totals for each letter grade are:\n" );
  printf( "A: %d\n", aCount );
  printf( "B: %d\n", bCount );
  printf( "C: %d\n", cCount );
  printf( "D: %d\n", dCount );
  printf( "E: %d\n", eCount );
  return 0; /* indicates successful termination */
} 

