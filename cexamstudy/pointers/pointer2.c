#include <stdio.h>

main()
{

    printf("Yes - Prints address and value of array elements. \n");
    int a[5];
    int i;
    for(i = 0;i<5;i++)
    {
        a[i]=i;
    }

    for(i = 0;i<5;i++)
    {
        printf("value in array %d and address is %16lu\n",a[i],&a[i]);
        printf("value in array %d and address is %i\n",a[i],&a[i]);
    }

   for(i = 0;i<5;i++)
    {
        printf("value in array %d and address is %p\n",a[i],&a[i]);
    }
}