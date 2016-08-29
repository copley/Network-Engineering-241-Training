#include <stdio.h>

void swap_ptr(int **, int **);

int main(void)
{ 
 int p = 11, q = 22;
 int *ptrp = &p, *ptrq = &q;
 int **ppp = &ptrp, **ppq = &ptrq;

 printf("Variables initialy are set to the values below.\n");
 printf("*ptrp = %d *ptrq = %d **ppp = %d **ppq = %d \n",*ptrp, *ptrq, **ppp, **ppq);



 swap_ptr(ppp,ppq); /* &ptrp, &ptrq passed */
 
 /* to swap_ptr() */
 printf("New values assigned to the variable below\n");
 printf("*ptrp = %d *ptrq = %d **ppp = %d **ppq = %d \n",*ptrp, *ptrq, **ppp, **ppq);


 return 0;
} 
/* creating swap pointer method here. No print outs required.*/
/* creates a temporary int pointer, sets a pointer to this variable and the swap is carried out.*/
void swap_ptr(int **ppp, int **ppq){
    int *temp = (*ppp);
    (*ppp) = (*ppq);
    (*ppq) = temp;
}