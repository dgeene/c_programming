#include <stdio.h>
// count characters entered in the cmd line
// Ctrl D inserts an EOF

int main()
{
    long nc;

    nc = 0;
    while( getchar() != EOF )
    {
        ++nc;
    }
    printf("%ld\n", nc);
}
