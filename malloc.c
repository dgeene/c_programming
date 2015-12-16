#include <stdio.h>

int main()
{
    int foo = 4;
    int *ptr;

    char amessage[] = "now is the time";
    char *p = amessage;

    //ptr = (int *)malloc(sizeof(int));

    //printf("Size of object: %d\n", sizeof(ptr));
    p = p+1;
    printf("message: %c\n", *p);
}
