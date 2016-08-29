/**
(6 marks) Write a program that finds the smallest of several integers entered by
user. You can only use the following variables.
**/

//int number; /* number of integers to be entered */
//int value; /* value input by user */
//int smallest; /* smallest number */
//int i; /* counter */ 

#include <stdio.h>
int main(void)
{
  int number; /* number of integers that are going to be entered by user */
  int value; /* the value input by user */
  int smallest; /* the smallest number found from all the user inputs*/
  int i; /* the counter value for the loop */
  printf( "Please enter the number of integers to be processed: " );
  scanf("%d", &number);
  printf("Enter your integer: ");
  scanf( "%d", &smallest );
  for (i = 2; i <= number; i++) {
    printf( "Enter the next integer: " ); /* gets the next integer */
    scanf("%d", &value);
    if ( value < smallest ) {
       smallest = value;
    } 
  } 
  printf( "\nThe smallest integer entered is: %d\n", smallest );
  return 0; /* indicate successful termination */
} 
