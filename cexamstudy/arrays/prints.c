#include <stdio.h>
/*@author Max Copley*/

#define mPchar char *
typedef char *tPchar;

// declaring using #define is the same as declaring char* a,b where a
// will only be made a char pointer where as b will be declared here as a char
// declaring using typedef demonstrates how to ensure both variable declaration
// names will be set to the type which is pointer.

typedef struct{
  int age;
  char gender;
  char *name;
} Person;

typedef union{
  int i;
  char c;
  char *p;
} int_char;



mPchar ma, mb;
tPchar ta, tb;

int main(void)
{


   int a = 4;
   short b;
   double c;
   int* ptr;
   printf("\n\n\n\n");
   /* example of sizeof operator */
   printf("Line 1 - Size of variable a = %d\n", sizeof(a) );// = 4
   printf("Line 2 - Size of variable b = %d\n", sizeof(b) );// = 2
   printf("Line 3 - Size of variable c = %d\n", sizeof(c) );// = 8

   /* example of & and * operators */
   ptr = &a;  /* 'ptr' now contains the address of 'a'*/
   printf("value of a is  %d\n", a);
   printf("*ptr is %d.\n", *ptr); // use (*) to get the value.

   /* example of ternary operator */
   a = 10;
   b = (a == 1) ? 20: 30;
   printf( "Value of b is %d\n", b );

   b = (a == 10) ? 20: 30;
   printf( "Value of b is %d\n", b );


  printf("-------------------------------------------------------------------------------\n");
  //defined outside the main function.
  printf("sizeof(ma) = %d\n", sizeof(ma));// = 8
  printf("sizeof(mb) = %d\n", sizeof(mb));// = 1

  printf("sizeof(ta) = %d\n", sizeof(ta));// = 8
  printf("sizeof(tb) = %d\n", sizeof(tb));// = 8

  printf("sizeof(Person) = %d\n", sizeof(Person));// = 16
  printf("sizeof(int_char) = %d\n", sizeof(int_char));// = 8

  int r1, r2, (*fp1)(void), (*fp2)(void), func(void);
  char m[5][7] = {"abcdef","ghijkl","mnopqr","stuvwx","yz"};
  char (*p)[7] = m;
  char *q = m[5];
  //p++; printf("(int)p -(int)m = %d yes %d\n",(int)p, (int)m);
  //printf("printing *p =  %p *q++ = %p  \n", *p,*q++); // prints odd things unsure why.
 
 
  printf("char m[5][7] = {'abcdef','ghijkl','mnopqr','stuvwx','yz'}; \n");
  printf("Accessing Values of Arrays Above\n");
  //p++;
  printf("**m = %c\n", **m);         // = a
  printf("*m = %c\n", *m);           // prints nothing , unsure why
  printf("**(m) = %c\n", **(m));     // = a
  printf("*(*m) = %c\n", *(*m));     // = a
  printf("**(m+1) = %c\n", **(m+1)); // = g
  printf("**(m+2) = %c\n", **(m+2)); // = m
  printf("**(m+3) = %c\n", **(m+3)); // = s
  printf("**(m+4) = %c\n", **(m+4)); // = y

  printf("%d\n", *m); // = I dont understand wild print outs
  printf("\n\n");
  printf("(*(p+3))[2] = %c\n",(*(p+3))[2]); // u
  printf("(*(m+3))[2] = %c\n",(*(m+3))[2]); // u 
   
  printf("(*(p+1))[1] = %c\n",(*(p+1))[1]); // h
  printf("(*(m+1))[1] = %c\n",(*(m+1))[1]); // h

  printf("\n\n");
  printf("\n");
  printf("*(*m+2) = %c\n", *(*m+2)); // = c
  printf("(*m+2) = %c\n", (*m+2)); // = I am not sure why this prints funny.
  //printf("**(*m+2) = %c\n", **(*m+2)); invalid arguement.
  printf("*(*(m)+0) = %c\n", *(*(m)+0));// = a
  printf("*(*(m)+1) = %c\n", *(*(m)+1));// = b
  printf("*(*(m)+2) = %c\n", *(*(m)+2));// = c
  printf("*(*(m)+3) = %c\n", *(*(m)+3));// = d
  printf("*(*(m)+4) = %c\n", *(*(m)+4));// = e
  printf("*(*(m)+5) = %c\n", *(*(m)+5));// = f
  printf("*(*(m)+6) = %c\n", *(*(m)+6));// = prints nothing here - index out of bounds.
  
  printf("*(*(m+1)+0) = %c\n", *(*(m+1)+0));// = g
  printf("*(*(m+1)+1) = %c\n", *(*(m+1)+1));// = h
  printf("*(*(m+1)+2) = %c\n", *(*(m+1)+2));// = i
  printf("*(*(m+1)+3) = %c\n", *(*(m+1)+3));// = j
  printf("*(*(m+1)+4) = %c\n", *(*(m+1)+4));// = k
  printf("*(*(m+1)+5) = %c\n", *(*(m+1)+5));// = l
  printf("*(*(m+1)+6) = %c\n", *(*(m+1)+6));// = prints nothing here - index out of bounds.

  printf("*(*(m+2)) = %c\n", *(*(m+2)));
  printf("*(*(m)+2) = %c\n", *(*(m)+2));

  printf("*(*(m+2)+0) = %c\n", *(*(m+2)+0));// = m
  printf("*(*(m+2)+1) = %c\n", *(*(m+2)+1));// = n
  printf("*(*(m+2)+2) = %c\n", *(*(m+2)+2));// = o
  printf("*(*(m+2)+3) = %c\n", *(*(m+2)+3));// = p
  printf("*(*(m+2)+4) = %c\n", *(*(m+2)+4));// = q
  printf("*(*(m+2)+5) = %c\n", *(*(m+2)+5));// = r
  printf("*(*(m+2)+6) = %c\n", *(*(m+2)+6));// = prints nothing here.

  printf("*(*(m+3)+0) = %c\n", *(*(m+3)+0));// = s
  printf("*(*(m+3)+1) = %c\n", *(*(m+3)+1));// = t
  printf("*(*(m+3)+2) = %c\n", *(*(m+3)+2));// = u
  printf("*(*(m+3)+3) = %c\n", *(*(m+3)+3));// = v
  printf("*(*(m+3)+4) = %c\n", *(*(m+3)+4));// = w
  printf("*(*(m+3)+5) = %c\n", *(*(m+3)+5));// = x
  printf("*(*(m+3)+6) = %c\n", *(*(m+3)+6));// = prints nothing here - index out of bounds.

  printf("*(m[1]+2) = %c\n", *(m[1]+2));    // = i
  printf("\n");

  printf("char m[5][7] = {'abcdef','ghijkl','mnopqr','stuvwx','yz'}; \n");
  printf("(*(m+1))[1] = %c\n", (*(m+1))[1]);// = h
  printf("(*(m+1))[2] = %c\n", (*(m+1))[2]);// = i
  printf("(*(m+1))[3] = %c\n", (*(m+1))[3]);// = j

  printf("(*(m+2))[2] = %c\n", (*(m+2))[2]);// = o
  printf("(*(m+3))[3] = %c\n", (*(m+3))[3]);// = v
  printf("(*(m+4))[4] = %c\n", (*(m+4))[4]);// = (Prints null here, index out of bounds.)

  printf("(*(p+3))[2] = %c\n", (*(p+3))[2]);// = u
  printf("\n");

  p++;

 


  char weekday[10] = "M";
  char week[7][10] = {"M","T","W","T","F","S","S"};


  printf("\n");
  int n[ 10 ]; 
  int i; 
   
   /* initialize elements of array n to 0 */
  for ( i = 0; i < 10; i++ ) {
      n[ i ] = 007;
  }
   
  printf( "%s%13s\n", "Element", "Value" );

  for ( i = 0; i < 10; i++ ) {
      printf( "%7d%13d\n", i, n[ i ] );
  } 
  printf("\n");



  int array[5],z,*ip;

  for ( z = 0; z < 5; i++ ) {
      array[z] = z;
  }
  ip = array;
  printf("*(ip+3 * sizeof(int)) = %d\n",*(ip+3 * sizeof(int)));
  printf("              *(ip+3) = %d\n", *(ip+3));



  return 0; /* indicate successful termination */
} 