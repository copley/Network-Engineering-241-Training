#include <stdio.h>

void swap2 (char a[],char b[]);

void main(void) {
	char a1[] = "BlackBlack";
	char b1[] = "White";
	printf("%s %s \n", a1, b1);
	printf("swap : \n");
	swap2(a1,b1);
	printf("%s %s \n", a1, b1);
}

void swap2 (char *a1, char *a2){
	while(*a1 != '\0'){
		char tmp = *a1;
		*a1 = *a2;
		*a2 = tmp;
		a1++;
		a2++;
	}
}