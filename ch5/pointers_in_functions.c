#include <stdio.h>

/*
 * section 5.3
 * When an array name is passed to a function,
 * what is passed is the location of its initial element.
 */
int strlen(char *);

int main()
{

    char *hello = "hello world";
    char array[20];
    char *pa = array;

    printf("Printing string lengths\n");
    printf("hello world: %d\n",   strlen(hello)  );
    printf("array[20]: %d\n",   strlen(array)  );
    printf("*pa: %d\n",   strlen(pa)  );
}

//return length of string
int strlen(char *s)
{
    int n;

    printf("printing 1st char of s\n");
    printf("%c\n", *s);
    for ( n = 0; *s != '\0'; s++ )
        n++;
    return n;
}
