#include <stdio.h>

main()
{
    int i = 100;
    printf(" %d\n",i);
    printf(" %i\n",i);

    char firstInitial, middleInitial, lastInitial;
    firstInitial= ')';
    middleInitial= 'A';
    //lastInitial= 'V'
    printf("\nMy Initials are %c%c%c\n", firstInitial, middleInitial, lastInitial);
    float fRevenue, fCost;
    //PRINTS INT INTO A CHAR HERE.
    i = 10121;
    printf(" %c\n",i);

    //works here
    // fRevenue = 0;
    // fCost = 0;

    // printf("\nEnter total revenue: ");
    // scanf("%f", &fRevenue);
    // printf("\nEnter total cost: ");
    // scanf ("%f", &fCost);
    // printf("\nYour profit is $%.2f\n", fRevenue - fCost);
    
    // PLUS OR MINUS PRINTS

    printf("%+d\n", -25);
    printf("%+d\n", 25);
    //PRINTS NUMBER WITH AND WITHOUT FLAG.
    printf("PRINTS NUMBER WITH AND WITHOUT FLAG\n");
    printf( "%d\n%d\n", 786, -786 );
    printf( "%+d\n%+d\n", 786, -786 );

    int r = 100;
      float fp1 = 0.0f;
  	float fp2 = 0.0f;
  	float fp3 = 0.0f;
 	 int value_count = 0;

 	 printf("Input:\n");
  	value_count = scanf("%f %f %f", &fp1, &fp2, &fp3);

 	printf("Return value = %d", value_count);
  	printf("\nfp1 = %f  fp2 = %f  fp3 = %f\n", fp1, fp2, fp3);
  	printf("%20.2d\n", 35);
  	printf("\a %d", 25);
  	// Printing with the 0( zero ) flag fills in leading zeros : printf 0s « printf scanf « C Tutorial
    printf( "%+09d\n", 452 );
    printf( "%09d\n", 452 );
    //R - L Justify Values.
    printf( "%10s%10d%10c%10f\n\n", "hello", 7, 'a', 1.23 );
    printf( "%-10s%-10d%-10c%-10f\n", "hello", 7, 'a', 1.23 );

}