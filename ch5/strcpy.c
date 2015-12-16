#include <stdio.h>

/*
 * Section 5.5
 * Illustrates aspects if pointers and arrays.
 * To copy a string we cant just say t = s. That will only copy
 * the pointer.
 */



// copy characters from t to s
void str_cpy( char *s, char *t )
{
    int i;

    i = 0;
    while ( (s[i] = t[i]) != '\0' )
        i++;
}

// pointer version
void strcpyptr( char *s, char *t )
{
    while ( (*s++ = *t++) != '\0' )
        ;
}



/*
 * Compare string s and t lexicographically.
 * returns: <0 is s<t, 0 if s==t, >0 if s>t
 * pointer version
 */
int strcmpptr( char *s, char *t )
{
    for ( ; *s == *t; s++, t++ )
        if ( *s == '\0' )
            return 0;
    return *s - *t;
}



int main()
{
    char foo[6];
    char bar[] = "foo";

    str_cpy( foo, bar);
    printf("bar: %c\n", *foo);
}
