#include <stdio.h>
//2012
void swap (char* , char* );
int func(char c , char *str);
int round_me(float f) {
    return (int)(f+0.5);
}
void swap (char* c1, char* c2) {
	char tmp = *c1;
	*c1 = *c2;
	*c2 = tmp;
}

int func(char c, char *str){
	while(*str !='\0'){
		if(c == *str){
			return 1;
		}
		str++;
	}
	return 0;
}

int main(void) {
	char c1 = 'e';
	char a[5] = "insidethis";


	int y = func(c1,a);
	printf("%d\n", y);
    return 0;
}
