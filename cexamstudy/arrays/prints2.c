#include "stdio.h"
int main(void)
{
  int m[4][4] = {{1,3,5,6},{11,33,55,77},{2,4,6,8},{22,44,66,88}};
  int (*parr)[4] = m ;
  int a[3] = {11,22,33};
  int *pa = a;
  printf("%d\n", *a);//11
  printf("%d\n", *(a+2));//33
  printf("%d\n", *pa);//11
  printf("%d\n", *(pa+1));//22
  printf("%d\n", *(pa+2));//33
  printf("%d\n", pa[0]);
  printf("%d\n", pa[1]);//22
  printf("%d\n", pa[2]);
  printf("%d\n", **m);//1
  printf("%d\n", *(*m+2));//5
  printf("%d\n", *(*(m+1)+1));//33
  printf("%d\n", *(m[1]+2));//55
  
  printf("%d\n", (*(m+2))[3]);//8
  printf("%d\n", (*(parr+3))[2]);//66

  printf("char n[4][6] = {01234,56789,abcde,fghij,klmno};\n");

  char n[4][6] = {"01234","56789","abcde","fghij","klmno"};

  printf("%c\n", **n);//0  exam.
  printf("%c\n", *(*n+3));//3  exam.

  printf("%c\n", *(*(n)));//0
  printf("%c\n", *(*(n+1)+3));//8  exam.


  printf("%c\n", *(n[1]+2));//7    exam.


  printf("%c\n", (*(n+2))[2]);//c
  printf("%c\n", (*(n+2))[3]);//d

  printf("%c\n", (*(n+3))[2]);//h
  printf("%c\n", (*(n+3))[3]);//i

  printf("%c\n", (*(n+1))[2]);//7
  printf("%c\n", (*(n+1))[3]);//8

  printf("%c\n", (*(n+4))[0]);//x
  printf("%c\n", (*(n+4))[4]);// ? exam. index out of bounds
  printf("%c\n", *(&n[0][0]+9));//8  exam. prints from address and 8 spaces along.

  return 0; /* indicate successful termination */
}