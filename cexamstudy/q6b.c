#include <stdio.h>


void bitwise_swap(char *s1, char*s2) {

    int i = 0;
    while (s1[i] != '\0') {
        s1[i] ^= s2[i];
        s2[i] ^= s1[i];
        s1[i] ^= s2[i];
        i++;
    }

}


void main(void) {

    char s1[] = "aaa";
    char s2[] = "bbb";
    int y = 8;
    printf("%d\n",77<<y);
    int num = 8;
    int p = num % 7;

    printf("%d\n", p );

    printf("%s, %s\n", s1, s2);
    bitwise_swap(s1, s2);
    printf("%s, %s\n", s1, s2);

}  


