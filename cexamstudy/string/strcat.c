#include "stdio.h"
#define SQ(x)((x) * (x))
void main(void){
    int y = 7;
    int z = SQ(y + 1);
    printf("%d\n", z);
    char a[10]={"abc"}, b[10]={"123456789"};
    strcat(a,b);
    printf("%s\n",a);
    strcat(a,b);
    printf("%s",a);
    return 0;
}

char *strcpy(char *d, const char *s){
   char *saved = d;
   while (*s)
   {
       *d++ = *s++;
   }
   *d = 0;
   return saved;
}

char *strcat(char *dest, const char *src){
    size_t i,j;
    for (i = 0; dest[i] != '\0'; i++)
        ;
    for (j = 0; src[j] != '\0'; j++)
        dest[i+j] = src[j];
    dest[i+j] = '\0';
    return dest;
}