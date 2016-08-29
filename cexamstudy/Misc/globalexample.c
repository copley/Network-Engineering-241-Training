#include <stdio.h>

int count = 0;                         /* Declare a global variable   */

void test1(void){
  printf("\ntest1   count = %d ", ++count);
}

void test2(void){
  static int count = 5;                   /* This hides the global count */
  printf("\ntest2   count = %d ", ++count);
}


int main(void){
  int count = 0;                      /* This hides the global count */

  for( ; count < 5; count++) {
    test1();
    test2();
  }
  return 0;
}