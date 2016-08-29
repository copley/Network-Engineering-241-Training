#include <stdio.h>

main(){
    int a[5];
    int *b;
    int *c;
    int i;
    for(i = 0;i<5;i++){
        a[i]=i;
    }
    for(i = 0;i<5;i++)   {
        printf("value in array %d\n",a[i]);
    }

    b=a;  // assigning base address of a to b - pointer.
    b++;  // increment the pointer to the next address along in the array.
          // b=4; this wont work, the pointer value needs to change by using *b
    
    *b=4;//set pointer value to be 4.
    b++;
    *b=6;
    b++;
    
    int q = 99;
    int y = 77;
    y -> q;
    printf("y = %d q = %d\n", y,q);
    *b=q;
    b++;
    // Only warning here. inputs string into int array here.
    *b="rtrt";
    // Actually index out of bounds here. Goes beyond 5.
    b++;
    *b=12;

    printf("after\n\n\n");
    for(i = 0;i<5;i++){
        printf("value in array %d\n",a[i]);
    }
}