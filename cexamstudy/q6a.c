#include <stdio.h>


void printbyte(int byte) {

    int i = 7;
    for (i >= 0; i--;)
        printf("%d", byte>>i & 1);

}


void main(void) {

    int i;

    printf("Type an integer: ");
    scanf("%d", &i);

    printbyte(i>>24);
    printf(" ");
    printbyte(i>>16);
    printf(" ");
    printbyte(i>>8);
    printf(" ");
    printbyte(i);
    printf("\n");

}
