#include <stdio.h>
#include <ctype.h>


#define BUFSIZE 100
char buf[BUFSIZE]; // buffer for ungetch
int bufp = 0;      // next free position in buf

/*
 * Get next integer from input into *pn.
 * Our version returns EOF for end of file,
 * 0 if next input is NaN, and positive for valid number
 * getch() and ungetch() are defined in section 4.3
 */

int getch(void);
void ungetch(int);

int main()
{
    int c;
    int SIZE = 10;
    int n, array[SIZE], getint(int *);

    for (n = 0; n < SIZE && (c = getint(&array[n])) != EOF; n++)
    {
        printf("array is: %d\n", array[n]);
        printf("c is: %d\n", c);
    }
}

int getint(int *pn)
{
    int c, sign;


    while ( isspace(c = getch()) ) // skip white space
        ;

    if ( !isdigit(c) && c != EOF && c != '+' && c != '-' )
    {
        ungetch(c); // its NaN
        return 0;
    }
    sign = (c == '-') ? -1 : 1;
    if( c == '+' || c == '-' )
        c = getch();

    for ( *pn = 0; isdigit(c); c = getch() ) //what?
        *pn = 10 * *pn + (c - '0');
    *pn *= sign;
    if ( c != EOF )
        ungetch(c);


    return c;
}




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
