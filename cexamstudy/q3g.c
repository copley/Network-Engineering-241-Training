#include <stdio.h>


typedef struct {
    int i;
    float f;
} int_float;


int_float multiply(int_float a, int_float b) {
    a.i *= b.i;
    a.f *= b.f;
    return a;
}


void main(void) {
    int_float
        a = { 2, 0.5 },
        b = { 2, 8.0 },
        c;

    c = multiply(a, b);

    printf("%d\n", a );
    printf("%d\n", b );
    printf("a.i: %d, a.f: %f\n", a.i, a.f);
    printf("b.i: %d, b.f: %f\n", a.i, b.f);
    printf("c.i: %d, c.f: %f\n", c.i, c.f);
}
