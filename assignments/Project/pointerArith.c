//pointer arithmatic

#define SIZE 10
...
int main(void)
{ ...
for (i=0; i<SIZE; i++)
x[i] = i;
rprint(x); /* call for reverse printing */
return 0;
}
void rprint(int *a) /* void rprint(int a[])
*/
{ int *p=a+SIZE-1; /* p=&a[9] */
for (p; p>=a; p--) /* decrement p */
printf("x[%d]=%d, &x[%d]=%x\n", (p-a), *p, (p-a), p);
}