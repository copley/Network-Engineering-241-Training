#include <stdio.h>
#include <string.h>
int_is_within(const char * str, char ch)
main()
{
    int k[10] = {0,1,2,3};




    int a[5];//initialise array
    int i;
    for(i = 0;i<5;i++)
    {
       a[i]=i;
    }

    for(i = 0;i<5;i++)
    {
        printf("value in array %d\n",a[i]);
    }
    char f = 'g';
    char t = 'd';

    int y = int_is_within(f,t);

    printf("%d\n", y);
}

int int_is_within(const char* str, char ch){

    int length = strlen(str);
    int i;
    for(i = 0; i < length; i++){
        if(*(str + i) == ch){
            return 1; 
        }
    }
    return 0;
}