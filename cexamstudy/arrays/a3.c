#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define SIZE 10

void rprint(int *); /* pass as a pointer */
void strcp(char *s, char *t);

int main(void){ 

	printf("a3.c example\n");
	int i, x[SIZE]; /* x[] has 10 int elements */
		for (i=0; i<SIZE; i++){
			x[i] = i; /* assign i to x[i] */
	}
	rprint(x); /* call for reverse printing */	


	char source[] = "this is an array";
	char target[] = "this is another array";
	printf("%c\n",strcp(source, target)); /* not strcpy */
	
	


	return 0;
}

void rprint(int *p){/* use array notation with ptrs */
	int i;
	for (i=SIZE-1; i>-1; i--){ /* i starts with 9 */
		printf("x[%d]= *(p+i) = %d, x[%d]= p[i] = %x\n", i, *(p+i), i, p[i]);
	}
}
// from apple home page.
char *
strcpy(char *s1, const char *s2)
{
	printf("here1\n");
    char *s = s1;
    while ((*s++ = *s2++) != 0)
	;
    return (s1);
}
strcat(char *s1, const char *s2)
{
	printf("here2\n");
    strcpy(&s1[strlen(s1)], s2);
    return s1;
}

// void strcp(char *s, char *t){
// 	int i, 
// 	char x[SIZE];
// 		for (i=0; i<SIZE; i++){
// 			 /* assign i to x[i] */
// 			if(*t++ = *s++){
// 				x[i] = *t;
// 			}
// 		}
// 	rprint(x);		
// }

//while ((*t++ = *s++) != '\0'){
//			printf("%c  ----  %c\n", *s, *t);






















































































































