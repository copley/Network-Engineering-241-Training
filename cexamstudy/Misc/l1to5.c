
#include <stdio.h>

main()
{
	int i = 0;
    i=printf("abcde\n");   
      printf("total characters printed %d\n",i);


	i = 2;
	double d = 5;
	i = (int)d;
	//i = d;
	
	printf("%d\n", i);
  printf("%.0f\n", d);
	printf("%d\n", i);
	

	//printing an integer 
	  int a;
 
   // printf("Enter an integer\n");
   // scanf("%d", &a);
 
   // printf("Integer that you have entered is %d\n", a);
 	
   //  char n[1000];
 
   //  printf("Input an integer\n");
   //  scanf("%s", n);
 
   //  printf("%s", n);
 	
   // int first, second, add, subtract, multiply;
   // float divide;
 
   // printf("\n Enter two integers\n");
   // scanf("%d%d", &first, &second);
 
   // add = first + second;
   // subtract = first - second;
   // multiply = first * second;
   // divide = first / (float)second;   //typecasting
 
   // printf("Sum = %d\n",add);
   // printf("Difference = %d\n",subtract);
   // printf("Multiplication = %d\n",multiply);
   // printf("Division = %.2f\n",divide);
 

   // int value = 1;
 
   // while(value<=3)
   // {
   //    printf("Value is %d\n", value);
   //    value++;
   // }
   // //Output: value 1, 2, 3 etc...

   int z;
 
   printf("Input an integer\n");
   scanf("%d", &z);
   //true false example here. (statement) T : F
   if (z%2 == 0 ?  1 : 0 ){
		printf("Even\n");
		} else{
   		printf("Odd\n");
   }

 
	return 0;
}





















