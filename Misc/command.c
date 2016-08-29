#include <stdio.h>

//int main(int argc, char *argv[])
int main(int argc, char **argv)
{
  printf("Program name: %s\n", argv[0]);
  int i;
  for(i = 1 ; i<argc ; i++)
    printf("\nArgument %d: %s", i, argv[i]);
    printf("\nArgument %d: %s", i, (*argv+1));
  return 0;
}