#include <stdio.h>
#define SIZE 10

void v_exchange(int a[]);
void v_exchangep(int * a); 

/* Prints the result to demonstrate the array elements are swapping*/
/* Change the v_exchange method in main to test both method work*/
int main(void) {
	int i, x[SIZE]; /* x[] has 10 int elements */
	for (i = 0; i < SIZE; i++){
		  x[i] = i; /* assign i to x[i] */
        printf("x[%d]=%d, &x[%d]=%x\n", i, x[i], i, &x[i]);

		}
/* call for value exchange. Change this method here to test other case which is v_exchange(int a[]); */
	v_exchange(x); 
	
    printf("\n");
	for (i = 0; i < SIZE; i++)
		printf("x[%d]=%d, &x[%d]=%x\n", i, x[i], i, &x[i]);
	return 0;
}
/* element exchange using array notation */
void v_exchangep(int a[]){ 
	int * front;
	int * end;
	int i=0;
	for (i=0; i<SIZE/2; i++){
		front = a+i;
		end = a+SIZE-1-i;
		int front_int = *front;
		*front = *end;
		*end = front_int;
	}
}
/* element exchange using pointer notation */
void v_exchange(int * a){
	int x = 0;
    int i= 0;
	for (i; i<SIZE/2; i++){
		x = a[SIZE-1-i];
		a[SIZE-1-i]=a[i];
		a[i] = x;
	}
	
}
















