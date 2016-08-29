#include <string.h>
#include <stdio.h>
#include <stdlib.h>


char* string_copy(char* s) {

    char* new = malloc(strlen(s) * sizeof(char));

    strcpy(new, s);

    return new;

}


void main(void) {
    char *s = "this is a string\n";
    char *p = string_copy(s);
    printf(p);
}
