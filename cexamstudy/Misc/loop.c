#include <stdio.h>
int main(void) /* to test if it is an upper-case alphabetic letter */
{ char i, c;
printf("\nPlease enter an alphabetic character:\n");
c = getchar();
if (isalpha(c)) /* true = nonzero, false = zero */
; /* empty is ok, but “;” must be there */
else
return(printf("You did not enter an alphabetic character\n"));
if (isupper(c) ? 1 : 0) /* true = 1, false = 0 */
printf("if-else: it is an upper-case letter\n");
else
printf("if-else: it is a lower-case letter\n");
i = (isupper(c) != 0 ? 'T' : 'F'); /* true = ‘T’, false = ‘F’ */

switch(i) {
case 'T':
printf("switch: it is an upper-case letter\n");
break; /* break must be there, otherwise it will go through */
case 'F':
printf("switch: it is a lower-case letter\n");
}
return 0;
}