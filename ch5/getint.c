#include <ctype.h>

/*
 * Get next integer from input into *pn.
 * Our version returns EOF for end of file,
 * 0 if next input is NaN, and positive for valid number
 * getch() and ungetch() are defined in section 4.3
 */

int getch(void);
void ungetch(int);


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

    for ( *pn = 0; isdigit(c); c = getch() )
        *pn = 10 * *pn + (c - '0');
    *pn *= sign;
    if ( c != EOF )
        ungetch(c);


    return c;
}
