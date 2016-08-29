#include <stdio.h>
void swap(int, int);
int main(void)
{ 
	int p = 7;
	int q = 9; 
	int *ptrp, *ptrq;
	int *ptrp = &p;
	int *ptrq = &q;
	swap(ptrp, ptrq); /*the addresses of p, q*/
	return 0; /*are passed to swap() */
}
void swap(int *ptrx, int *ptry)
{ 
	int tmp;
	tmp = *ptrx;
	*ptrx = *ptry; /*the values stored at */
	*ptry = tmp; /*the addresses of p, q*/
} /*are swapped */