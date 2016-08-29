#include <stdio.h>

int main(void)
{
  int number = 0;                 
  int *pointer = NULL;            

  number = 10;

  pointer = &number;            

  printf("\n Output the value (an address). pointer's value: %p", pointer);  /* Output the value (an address) */
  printf("\n Value at the address . value pointed to: %d\n", *pointer);       /* Value at the address */
  run();
  return 0;
}

int run(void)
{
  long a = 1L;
  long b = 2L;
  long c = 3L;

  double d = 4.0;
  double e = 5.0;
  double f = 6.0;

  printf("\nA variable of type long occupies %d bytes.", sizeof(long));
  printf("\nHere are the addresses of some variables of type long:");
  printf("\nThe address of a is &a =  %p  The address of b is &b =  %p", &a, &b);
  printf("\nThe address of c is &c =  %p", &c);
  printf("\n\nA variable of type double occupies %d bytes.", sizeof(double));
  printf("\nHere are the addresses of some variables of type double:");
  printf("\nThe address of d is &d = %p  The address of e is &e = %p", &d, &e);
  printf("\nThe address of f is &f = %p\n", &f);

  //int z = &a;
  //printf("\n z = &a; %p",z);













  return 0;
}
