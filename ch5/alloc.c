#include <stdio.h>

/*
 * Rudimentray storage allocator.
 * Alternative implementation to malloc() and free()
 * Calls to afree must be made in the opposite order
 * to the calls made on alloc.
 */

#define ALLOCSIZE 10000 // size of available space

static char allocbuff[ALLOCSIZE]; // storage for alloc
static char *allocp = allocbuf; //next free position


/*
 * Return pointer to n characters
 */
char *alloc(int n)
{
    if ( allocbuf + ALLOCSIZE - allocp >= n ) // does it fit?
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
