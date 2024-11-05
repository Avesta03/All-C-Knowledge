
#include <stdio.h>

/* See notes.md for info re #define */

#define LOWER 0
#define UPPER 300
#define STEP 20

/* Utilising the 'For' Statement */

int main()
{
    int fahr;
    
    for (fahr = 0; fahr <= 300; fahr = fahr + 20)
        printf("%3d %6.1f\n", fahr, (5.0 / 9.0) * (fahr - 32));
    
    return 0; /* This is optional from C99, but indicates successful completion of the 'main' function */
}

