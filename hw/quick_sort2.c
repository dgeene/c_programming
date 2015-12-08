#include <stdio.h>

#define LINELIMIT 100 // max 100 chars

int is_number(char arg[]);

/*
 * This version performs a quick sort of integers.
 * This time the user is prompted to enter integers.
 * TODO optimizer pointer use later
 *
 */
int main()
{
    int c;
    int ii = 0;
    char line[0];
    int valid_nums = 0;


    while ( c = getchar() != EOF )
    {
        line[ii] = c;
        ++ii;
        // malloc
        if ( c = '\n' )
        {
            printf("newline");
            //check if #
            //reset ii
            //reset line[]
        }
    }


    if ( valid_nums == 0 )
    {
        printf ("You didn't provide any valid numbers to sort!\n" );
        return;
    }
    else {
        sort(nums);
    }
}



/*
 * Split a given argument into a single character
 * testing the arg to make sure its a number
 * argv is just a one dimmensional array of strings and since strings
 * are just arrays..
 * TODO look up zero terminated arrays.
 */
int is_number(char arg[]) // char arg[]
{
    int i;

    for (i = 0; arg[i] != '\0'; ++i)
    {
        if (arg[i] >= '0' && arg[i] <= '9') //these strings need to be converted
            ;
        else
            return 0; // just quit the loop early.
    }

    return 1;
}



int sort(int nums[])
{
    printf("foo\n");
}
