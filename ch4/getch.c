/*
 * getch() and ungetch()
 * Helps collect integers from input to form a number.
 * When it comes across a NaN it will unread that character
 * so the calling program doesnt have to think about it.
 */
#define BUFSIZE 100

char buf[BUFSIZE]; // buffer for ungetch
int bufp = 0;      // next free position in buf


// get a (possibly pushed back) character
int getch(void)
{
    return ( bufp > 0 ) ? buf[--bufp] : getchar();
}


// push cahracter back onto input
void ungetch(int c)
{
    if ( bufp >= BUFSIZE )
        printf("ungetch: too many characters\n");
    else
        buf[bufp++] = c;
}
