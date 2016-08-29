/** Enter a choice:
    0 Print the array of grades
    1 Find the minimum grade
    2 Find the maximum grade
    3 Print the average on all tests for each student
    4 End program
**/




#include <stdio.h>
#define STUDENTS 3
#define EXAMS 4

/* function prototypes */
void minimum( int grades[][ EXAMS ], int pupils, int tests );
void maximum( int grades[][ EXAMS ], int pupils, int tests );
void average( int grades[][ EXAMS ], int pupils, int tests );
void printArray( int grades[][ EXAMS ], int pupils, int tests );
void printMenu( void );




int main(void)
{
 /* pointer to a function that takes as parameters a
 two-dimensional array and two integer values
 is this an inner class? */
 void ( *processGrades[ 4 ] )( int [][ EXAMS ], int, int )
 = { printArray, minimum, maximum, average};
   

 int choice = 0; /* menu choice */
 /* array of student grades */
 int studentGrades[ STUDENTS ][ EXAMS ] = { { 77, 68, 86, 73 },
 { 96, 87, 89, 78 },
 { 70, 90, 86, 81 } };
 /* loop while user does not choose option 4 */
 while ( choice != 4 ) {
 /* display menu and read user's choice */
 	do {
	 printMenu();
	 scanf( "%d", &choice );
	 } while ( choice < 0 || choice > 4 ); /* end do...while */
	 
	 /* for you to complete */
	  processGrades[choice](studentGrades, STUDENTS, EXAMS);/* passes the choice into the array here*/
 } /* end while */
 return 0; /* indicate successful termination */
}  /* end main */



   /* search for the minimum value */
void minimum( int grades[][ EXAMS ], int pupils, int tests )
{
 int i; /* loop counter */
 int j; /* loop counter */
 int lowGrade = 100; /* set lowGrade to highest possible score */
   /* for you to complete , implemented the Minimum algoirthm here to find min value*/
	/*creating a double for loop to iterate through the grades and find the highest grade. */
	for (i = 0; i<3; i++){
		for (j=0; j<4; j++){
			/*check condition here to check against lowest grade so far. */
			if (grades[i][j] < lowGrade){
				lowGrade = grades[i][j];
			}
		}
	}
 printf( "\n\tThe lowest grade is %d\n", lowGrade );
}  /* end function minimum */


/* search for maximum value */
void maximum( int grades[][ EXAMS ], int pupils, int tests )
{
 int i; /* loop counter */
 int j; /* loop counter */
 int highGrade = 0; /* set highGrade to lowest possible score */
/* for you to complete , implemented the Maximum algoirthm here to find max value*/

/*creating a double for loop to iterate through the grades and find the highest grade. */
	for (i = 0; i<3; i++){
		for (j=0; j<4; j++){
			/*check condition here to check against highest grade so far. */
			if (grades[i][j] > highGrade){
				highGrade = grades[i][j];
			}
		}
	}

 printf( "\n\tThe highest grade is %d\n", highGrade );
} /* end function maximum */


/* calculate average */
void average( int grades[][ EXAMS ], int pupils, int tests )
{
 int i; /* loop counter */
 int j; /* loop counter */
 int total; /* sum of all grades */
 printf( "\n" );
/* for you to complete , implemented an algoirthm here to find average value*/
	for (i = 0; i<3; i++){
		for (j=0; j<4; j++){
			total += grades[i][j];
				/* printf("%d\n",total);*/
		}
	}/*print statement below to display average to the console.*/
printf("\n\tThe average grade is %d\n", total/(STUDENTS*EXAMS));

} /* end function average */

/* print the contents of the array */
void printArray( int grades[][ EXAMS ], int pupils, int tests )
{
 int i; /* loop counter */
 int j; /* loop counter */
	 printf( "\n\t\t[ 0 ] \t[ 1 ] \t[ 2 ] \t[ 3 ]" );
/* for you to complete */

	 for (i = 0; i<3; i++){
		printf("\n  \t[%d]\t",i);
		for (j=0; j<4; j++){
			printf("%d\t",grades[i][j]);
		}
	}

 printf( "\n" );
} /* end function printArray */


/* display the menu */
void printMenu( void )
{
 printf( "\n\tEnter a choice:\n"
 "\t 0 Print the array of grades\n"
 "\t 1 Find the minimum grade\n"
 "\t 2 Find the maximum grade\n"
 "\t 3 Print the average on all"
 " tests for each student\n"
 "\t 4 End program\n"
 "\t? " );
} /* end function printMenu */ 
