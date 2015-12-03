#include <stdio.h>
// count lines. enter a string and press enter.
// Ctrl D inserts an EOF

int main()
{
    int c, nl;

    nl = 0;
    while( (c = getchar()) != EOF )
    {
        if( c == '\n' )
            ++nl;
    }
    printf( "%d\n", nl );
}
