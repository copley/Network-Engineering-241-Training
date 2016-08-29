#include<stdio.h>
int fac(int);

main()
{
  // demonstrates factorial printout.
  // demonstrates switch case here.
	printf("\n%d\n",fac(5));

   int a, b, c;
   char ch;
   
   int r = 70;
   while (1) {
      printf("Inut two integers\n");
      scanf("%d%d", &a, &b);
      //getchar();
 
      c = a + b;
 
      printf("(%d) + (%d) = (%d)\n", a, b, c);
 
      printf("Do you wish to add more numbers (y/n)\n");
      //scanf("%c",ch); doesnt work.
      ch = getchar();

      printf("here 2 %c\n",ch);
      if (ch == 'y' || ch == 'Y'){
         ch = 0;

         continue;
       }
       //}else{
   	   break;
         //}
   }
  ch = 0;
  printf("Enter a character\n");

  ch = getchar();
 
  if (ch == 'a' || ch == 'A' || ch == 'e' || ch == 'E' || ch == 'i' || ch == 'I' || ch =='o' || ch=='O' || ch == 'u' || ch == 'U')
    printf("%c is a vowel.\n", ch);
  else
    printf("%c is not a vowel.\n", ch);

 
  printf("Input a character\n");

  scanf("%c", &ch);
 
  switch(ch)
  {
    case 'a':
    case 'A':
    case 'e':
    case 'E':
    case 'i':
    case 'I':
    case 'o':
    case 'O':
    case 'u':
    case 'U':
      printf("%c is a vowel.\n", ch);
      break;
    default:
      printf("%c is not a vowel.\n", ch);
  }   

  

   return 0;
}

int fac(int n)
{ 
  printf("here we are\n");
	if (n == 0) return 1;
return n * fac(n-1);
}