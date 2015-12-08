#include <stdio.h>


/*
 * getch() and ungetch()
 * Helps collect integers from input to form a number.
 * When it comes across a NaN it will unread that character
 * so the calling program doesnt have to think about it.
 */
#define BUFSIZE 100

char buf[BUFSIZE]; // buffer for ungetch
int bufp = 0;      // next free position in buf


/* Get a (possibly pushed back) character.
 * Reads from the buffer if theres anything there.
 * Or calls getchar() if the buffer is empty.
 * returns: next input cahracter to be considered.
 */
int getch(void)
{
    return ( bufp > 0 ) ? buf[--bufp] : getchar();
}


// push character back onto input
void ungetch(int c)
{
    if ( bufp >= BUFSIZE )
        printf("ungetch: too many characters\n");
    else
        buf[bufp++] = c;
}


// example usage. nonworking
int main()
{
    int c;
    c = getch();
    while( c != EOF )
    {
        if (c == 'e')
        {
            ungetch(c); //prints infinite e's
        }
        printf("%c", c);
        c = getch();
    }
}
