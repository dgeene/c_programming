#include <stdio.h>

int main()
{
    int a[10];
    a[0] = 45;
    a[1] = 66;

    int *pa;
    pa = &a[0]; // pa points to 0th element of a


    int x;
    x = *pa; // copy contents of a[0] into x

    printf("a[0] is: %d\n", a[0]); // 'a[0]' is actually *(a[0]) ?
    printf("%p\n", pa); //prints pointer address
    printf("x is: %d\n", x);
    printf("pa+1 is: %p\n", pa+1); //so pa+1 points to the next ADDRESS OF a? so the address of a[1]?
    printf("*(pa+1) is: %d\n", *(pa+1)); //this prints the actual value, do 66
    printf("pa[1] is: %d\n", pa[1]); // automatically dereferences

    printf("a: %d\n", a); // using just 'a' refers to the first elem. use '*a' to print actual value
}
