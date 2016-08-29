#include <stdlib.h>

int main (){
	int i, a, n = 32;
	printf("Enter integer:");
	scanf("%d", &a);
	int mask = 1<<(n-1); /* mask = 1000... */
	for (i=1; i<=n; i++)
	{ 
		putchar((a & mask)? '1':'0');
		a <<=1; 	/* shift next bit to leftmost*/
		if (!(i%8)) /* for decoration */
		{ 
			if (i<n) putchar(' ');
			if (i==n) putchar('\n');
		}
	}
	return 0;
}