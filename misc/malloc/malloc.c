#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *ptr_one;

    // the address block will be placed int the pointer
    ptr_one = (int *)malloc(sizeof(int));

    if (ptr_one == 0)
    {
        printf("Error: out of memory\n");
        return 1;
    }

    *ptr_one = 25;
    printf("%d\n", *ptr_one);

    free(ptr_one);
    return 0;
}
