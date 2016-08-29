
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define SIZE 5

typedef enum {metric, imperial} Scale;

typedef struct{
	int feet;
	int inches;
}FeedAndInches;

typedef union{
	float metres;
	FeedAndInches feetandinches;
}Value;

typedef struct{
	Scale scale;
	Value reading;
}Height;

int main(){


	printf("here \n");

	return 0;
}



void tometre(Height *h){









}
