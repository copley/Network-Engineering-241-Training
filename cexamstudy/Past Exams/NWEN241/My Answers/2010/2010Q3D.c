#include <stdio.h>
#include <string.h>
#define SIZE 5
int main() {
	char a1 [] = "ABCD", a2 [] = "abcdef", a3 [] = "12345";
	strcpy(a1, a2);
	strcat(a2, a3);
	return 0;
}

/**
stpcpy can be problematic if the max character length of destination is shorter than max character length of source
strcat can be problematic if the the max character length of source is shorter than character length of the source and
destination combined*/