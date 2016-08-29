#include <stdio.h>


void nowhere(int **p) {

    *p = NULL;

}


void main(void) {

    int a = 123;
    int *p = &a;
    printf("%d\n",*p );
    printf(p == NULL ? "nowhere\n" : "somewhere\n");
    nowhere(&p);
    printf(p == NULL ? "nowhere\n" : "somewhere\n");
    printf("a = %d\n",a);
    
    printf("%d\n",*p );
    printf("%d\n",*p );

}
