/**. (6 marks) Write a program that prints the following pattern. Use for loops to
generate the pattern. All asterisks (*) should be printed by a single printf
statement of the form printf(“*”). You can only use the following variables.
*
**
***
****
**/
#include <stdio.h>
 
main()
{
 int row; /* initialise row counter */
 int col; /* initialise column counter */ 

  for (row = 1; row <= 4; row++) {
    for (col = 1; col <= row; col++) { //sets col less than the row here to create the pattern.
       printf( "*" );
    } 
    printf( "\n" );
  } 
  printf( "\n" );
  return 0; /* indicate successful termination */

}
