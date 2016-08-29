#include <stdio.h>
/*
int count = 0;                         /* Declare a global variable   */
/*
void test1(void){
  printf("\ntest1   count = %d ", ++count);
}

void test2(void){
  static int count;                   /* This hides the global count */
  //printf("\ntest2   count = %d ", ++count);
//}

/*
int main(void){
  int count = 0;                      /* This hides the global count */

  //for( ; count < 5; count++) {
    //test1();
    //test2();
  //}
  //return 0;
//}


int i =0;            //Global variable
int j = 89;
f1(void);
f2(void);
main(){
    int i ;                 // local variable
    void f1(void) ;        
    i =0;                  
    printf("value of i in main %d \n",i);  
    f1(); 
    f2();                                
    printf("value of i after call %d \n ",i);
}
f1(void)                      
{
    int i=0;         
    i = 50;   
}
f2(void)
{
    j = 80005;
    printf(" global j = %d \n",j);    
}


