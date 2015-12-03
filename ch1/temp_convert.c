#include <stdio.h>

#define LOWER   0    // lower limit of temp table
#define UPPER   300  // upper limit of temp table
#define STEP    20   // step size

main()
{
    float fahr, celsius;


    fahr = LOWER;
    while( fahr <= UPPER )
    {
        celsius = (5.0/9.0) * (fahr-32.0);
        printf("%3.0f %6.1f\n", fahr, celsius);
        fahr = fahr + STEP;
    }
}
