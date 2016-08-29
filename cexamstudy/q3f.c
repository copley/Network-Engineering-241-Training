#include <stdlib.h>

int *i = malloc(128);
extern i = 0; /* i cannot be declared/initialized again so this code will not compile */


int main(void) {
    char *p2 = malloc(128);
}
