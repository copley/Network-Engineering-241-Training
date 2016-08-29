#include <stdio.h>
#include <stdlib.h>
#define SIZE 10
void rprint(int a[]); 
void rprint2(int *p);/* pass an array as an argument */
int main(void)
{ 
	printf("a2.c example\n");
	int i, x[SIZE]; /* x[] has 10 int elements */
	for (i=0; i<SIZE; i++)
		x[i] = i; /* assign i to x[i] */
	rprint(x); /* call for reverse printing */
	rprint2(x);
return 0;
}


void rprint(int a[]) /* pass by value??? */
{ 
	int i;
		for (i=SIZE-1; i>-1; i--) /* i starts with 9 */
		//prints values of arrays and address linking to each element in the array.
		printf("x[%d]=%d, &x[%d]=%x\n", i, a[i], i, &a[i]);
}
void rprint2(int *p){/* use array notation with ptrs */
	int i;
	for (i=SIZE-1; i>-1; i--){ /* i starts with 9 */
		printf("x[%d]= *(p+i) = %d, x[%d]= p[i] = %x\n", i, *(p+i), i, p[i]);
	}
}