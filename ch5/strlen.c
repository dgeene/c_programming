#include <stdio.h>

/*
 * Section 5.4 address arithmetic
 */



/*
 * return length of string s
 */
int strlen( char *s )
{
    char *p = s; // point to the first charcater of string

    while ( *p != '\0' ) //examine the string until the end is seen
        p++;

    return p - s; // give the num of characters advanced over
}



int main()
{
    printf("Length of string: %d\n", strlen("poop bizz fuzz 234"));
}
