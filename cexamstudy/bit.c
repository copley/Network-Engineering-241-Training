# include<stdio.h>

void method1();
void method2();

main()
{
  char c1 = 1,c2 = 2,c3 = 3;

  c3 = c1 & c2;
  printf("\n Bitwise AND i.e. c1 & c2 = %d",c3);
  c3 = c1 | c2;
  printf("\n Bitwise OR i.e. c1 | c2 = %d",c3);
  c3 = c1 ^ c2;
  printf("\n Bitwise XOR i.e. c1 ^ c2 = %d",c3);
  c3 = ~c1;
  printf("\n ones complement of c1 = %d",c3);
  c3 = c1<<2;
  printf("\n left shift by 2 bits c1 << 2 = %d",c3);
  c3 = c1>>2;
  printf("\n right shift by 2 bits c1 >> 2 = %d",c3);
  
  method1();
  method2();
  return 0;
  
}
void method2(){
  unsigned int original = 30;
  unsigned int result = 0;
  unsigned int mask = 0xF;  



  // unsigned int original = 0xABC;
  // unsigned int result = 0;
  // unsigned int mask = 0xF;    

  printf("\n original = %X", original);

  /* Insert first digit in result */
  result |= original&mask;    

  /* Get second digit */
  original >>= 4;             
  result <<= 4;               
  result |= original&mask;    

  /* Get third digit */
  original >>= 4;             
  result <<= 4;               
  result |= original&mask;    
  printf("\t result = %X\n", result);
}
void method1()
{
  char c1 = 4,c2 = 6,c3 = 3;
  c3 = c1 & c2;
  printf("\n Bitwise AND i.e. c1 & c2 = %d",c3);
  printf("\n");

}