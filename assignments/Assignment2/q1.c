#include <time.h>
#include <stdio.h>

/* sum1 method using recursion*/
unsigned int sum1(unsigned int from, unsigned int to){ /* recursion */
    if(from == to){
    return to;
    }
    else{return from + sum1(from +1 ,to);
    }    
}
/* sum2 method using iteration*/
unsigned int sum2(unsigned int from, unsigned int to){/* iteration */
    int total = 0;
    while(from <= to){
    total = total + from;
    from = from +1;
    }
    return total;
} 

/* sum3 method using algorithm*/
/* algorithm: sum(1..n) = n*(n+1)/2, sum(m..n) = sum(1..n) - sum(1..m-1) */
unsigned int sum3(unsigned int from, unsigned int to){ /* algorithm */
    int x = 0;
    int y = 0;
    int z = 0;
    x = (to * (to+1))/2;
    y = ((from-1) * from)  /2;
    z = x-y; 
    return z;
}

int main(void)
{
     unsigned int s;
     unsigned from, to;
     double t1, t2;
     printf("Enter the first integer:");
     scanf("%d", &from);
     printf("Enter the second integer:");
     scanf("%d", &to);
     t1 = clock();
     s = sum1(from, to);
     
     t2 = clock();
     printf("sum1=%d, %fseconds.\n", s, (t2-t1)/CLOCKS_PER_SEC);
     t1 = clock();
     s = sum2(from, to);
     t2 = clock();
     printf("sum2=%d, %fseconds.\n", s, (t2-t1)/CLOCKS_PER_SEC);
   
     t1 = clock();
     s = sum3(from, to);
     t2 = clock();
     printf("sum3=%d, %fseconds.\n", s, (t2-t1)/CLOCKS_PER_SEC);
     

    return 0;
} 
