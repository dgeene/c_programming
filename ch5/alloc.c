#include <stdio.h>

/*
 * Alternative imprementation to malloc() and free()
 */

#define ALLOCSIZE 10000 // size of available space

static char allocbuff[ALLOCSIZE]; // storage for alloc
static char *alloccp = allocbuf; //next free position


/*
 * Return pointer to n characters
 */
char *alloc(int n)
{
    if ( allocbuf + ALLOCSIZE - allocp >= n ) // it fits
    {
        allocp += n;
        return allocp - n; // old p
    }
    else
        return 0; //no room
}



/*
 * free storage pointed to by p
 */
void afree(char *p)
{
    if ( p >= allocbuf && p < allocbuf + ALLOCSIZE )
        allocp = p;
}
