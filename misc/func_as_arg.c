#include <stdio.h>

/*
 * Example of passing a function as an argument
 */


/*
 * parameter *f is a pointer to a function which has void return type
 */
void func( void(*f)(int, int) );



void print(int x, int y)
{
    printf("%d\n", x);
    printf("y: %d\n", y);
}


// passing the pointer to the function as parameter
int main()
{
    func(print);
}


void func( void (*f)(int, int) )
{
    int ctr;
    for (ctr = 0; ctr < 5; ctr++)
    {
        //print(ctr)  // this is what it looks like called directly
        (*f)(ctr, 2);
    }
}
