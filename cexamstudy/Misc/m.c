
#include <stdio.h>

main()
{
   
	int i;
	float f;
	char c;
	char s[80];
	printf("Type in a double\n");
	scanf("%d", &i); 
	
	/* %d is format information
	* d is conversion character
	*/
	scanf("%f", &f); 
	
	/* &f is f’s memory address
	* input is sent to &f
	*/
	printf("\nYou typed in \"%f\"\n", f);
	
	/* \n starts new line. \” treats “
	* as an ordinary character
	*/
	scanf("%d", &i); 
	
	/* %d is format information
	* d is conversion character
	*/
	scanf("%f", &f); /* &f is f’s memory address
	* input is sent to &f
	*/
	printf("\nYou typed in \"%f\"\n", f);
	
	/* \n starts new line. \” treats “
	* as an ordinary character
	*/
	scanf(" %c", &c); 
	/* blank space preceding %c to
	* ignore \n typed in earlier
	*/
	scanf("%s", s); // a seq. of nonwhite space char
	scanf("%d[^\n]", s); // [^\n] means \n is the end of
	printf("%i\n", s);
	printf("%c\n", c);	
	printf("%f\n", f);


	// input. s = &s[0] 
	return 0;
}





















