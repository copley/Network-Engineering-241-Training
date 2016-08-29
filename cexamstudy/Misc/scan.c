//  Ternary operators return values based on the outcomes of 
//  relational expressions.

// The general form of the ternary operator is:

// (expr 1) ? expr2 : expr3
// If expr1 returns true then the value of expr2 is returned as a result; 
// otherwise the value of expr3 is returned.

#include <stdio.h>

main()
{

   //putchar() and getchar() example 
   char g;
   for (g = 'A' ; g <= 'Z' ; g++) putchar (g);
    printf("\n");
  
   char p;
 
   printf("Enter character: ");
   p = getchar();
 
   printf("Character entered: ");
   putchar(p);

   int i= 2;
   int j= 7;

   int k = ( i>j ) ? i : j;

   printf("\n k = %d",k);

   char letter =0;                         

   printf("Enter an upper case letter:");  
   scanf(" %c", &letter);                  

   if ((letter >= 'A') && (letter <= 'Z')) 
   {
     letter += 'a'-'A';                    
     printf("You entered an uppercase %c.\n", letter);
   }
   else
     printf("You did not enter an uppercase letter.\n");
 
   return 0;
}







































