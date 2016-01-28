#include <stdio.h>
#include <stdlib.h>

typedef struct rec
{
    int i;
    float PI;
    char A;
} RECORD;

int main()
{
    printf("The size of RECORD is: %d\n", sizeof(RECORD));
    RECORD *ptr_one;

    ptr_one = (RECORD *)malloc(sizeof(RECORD));

    (*ptr_one).i = 10;
    (*ptr_one).PI = 3.14;
    (*ptr_one).A = 'a';

    free(ptr_one);
    return 0;

}
