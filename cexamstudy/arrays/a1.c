#include <stdio.h>
#include <stdlib.h>
#define SIZE 10
void rprint(int *); /* pass as a pointer */
int main(void)
{ 
	printf("a1.c example\n");
	int i, x[SIZE]; /* x[] has 10 int elements */
	for (i=0; i<SIZE; i++){
		x[i] = i;} /* assign i to x[i] */
		rprint(x); /* call for reverse printing */
	
	return 0;
}

void rprint(int *a) /* NO! pass as a pointer */
{ 
	int i;
		for (i=SIZE-1; i>-1; i--){ /* i starts with 9 */
			printf("x[%d]=%d, &x[%d]=%x\n", i, *(a+i), i, a+i);
			printf("x[%d]=%d, *(a+i) =%d &x[%d]=%x a+i = %d\n", i, *(a+i),*(a+i), i, a+i, *a+i);
		}
}