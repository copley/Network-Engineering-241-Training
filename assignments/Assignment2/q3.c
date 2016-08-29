#include <stdio.h>

int stringcmp(const char *s1, const char *s2); /* prototype */

int main(void) {
	char string1[80]; /* create a string */
	char string2[80]; /* create another string */
	printf("Enter two strings: ");
	scanf("%s%s", string1, string2);
	printf("The result is %d\n", stringcmp(string1, string2));
	return 0;
}
/* string compare method here, individualy iterates through char in each string for comparisons.*/
int stringcmp(const char *s1, const char *s2) {
	char * i = s1;
	char * f = s2;
	while (*i != '\0'|| *f != '\0' ) {
		if (*i != *f) {
			return 0;
		}
		i++;
		f++;
	}
	return 1;
}

