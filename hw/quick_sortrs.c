#include <stdio.h>
#include <stdlib.h>

/*
 * Perform a quick sort of integers given from the command line
 * TODO go over passing of variables
 *
 */
int main( int argc, char *argv[] )
{
    int i;
    int j = 0; // this will be valid_nums index
    int valid_nums = 0;
    int nums[argc - 1]; //c compiler won't like this


    for ( i=1; i<argc; i++ )
    {
        if ( is_number(argv[i]) )
        {
            // add to valid array
            nums[j] = *argv[i];
            ++j;
            ++valid_nums;
        }

        // check each element is a num. if float then round
        //    validNum++
    }


    if ( valid_nums == 0 )
    {
        printf "You didn't provide any valid numbers to sort!\n" );
        return;
    }
    else {

        //prep an array for sorting
        int sizeofarray = argc - 1;
        intarray  = (int *)malloc( sizeofarray * sizeof( int ));
        for ( ii = 1; ii  < argc; ii++ )
        {
            intarray[ii-1] = atoi( argv[ii] );
        }


        //sort(nums);
    }
}



/*
 * Split a given argument into a single character
 * testing the arg to make sure its a number
 * argv is just a one dimmensional array of strings and since strings
 * are just arrays..
 * TODO look up zero terminated arrays.
 */
int is_number(char [] arg) // char arg[]
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



int sort(int num, int* intarray)
{
    printf("foo\n");
}
