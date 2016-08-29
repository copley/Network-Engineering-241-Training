#include<stdio.h>

  struct addr {
    char name[40];
    char street[40];
    char city[40];
    char state[3];
    char zip[10];
  };

  main()
  {
    struct addr *p;

    p = malloc(sizeof(struct addr));

    if(p==NULL) {
      printf("Allocation Error\n");
      exit(1);
    }
    return p;
  }