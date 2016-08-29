//pointer arithmatic
#include <stdio.h>

struct student
{
    char *name;
    float marks;
}   student1, student2;

struct card {                           
   char *face; 
   char *suit; 
};

int main ( )
{
    struct student student3;

    student1.name = "null";
    student2.marks = 99.9;
    printf (" Name is %s %s\n", student1.name, student1.marks);
    printf (" Marks are %f \n", student2.marks);

   char word = 'r';
   char *q;
   (int)*q = &word;

   printf("%c %c \n", word, q);

   struct card aCard; 
   struct card *cardPtr;

   aCard.face = "Ace";   
   aCard.suit = "Spades";

   cardPtr = &aCard;

   printf( "%s%s%s\n%s%s%s\n%s%s%s\n", aCard.face, " of ", aCard.suit,
   	cardPtr->face, " of ", cardPtr->suit,                           
      ( *cardPtr ).face, " of ", ( *cardPtr ).suit );      
   return 0;  
}