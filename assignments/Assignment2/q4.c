#include <stdio.h>

int stringlen(const char *s); /* prototype */

int main(void) {
	char string[80]; /* create char array */
	printf("Enter a string: ");
	scanf("%[^\n]", string);
	printf("%d\n", stringlen(string));
	return 0;
}

int stringlen(const char *s) {
	int len = 0;
	char c = *s;

	while (c != '\0') {
		c = *(s++);
		len++;
	}
	return len-1;
}
