/* Same as before but make fahr/celsius a float, which makes the formula for conversion much more natural */
#include <stdio.h>


main()
{
    printf("Table #2\n");

    float fahr, celsius;
    int lower, upper, step;
    lower = 0;
    upper = 300;
    step = 20;

    fahr = lower;
    while (fahr <= upper) {
        celsius = (5.0/9.0) * (fahr-32.0);
        printf("%3.0f %6.1f\n", fahr, celsius);
        fahr = fahr + step;
    }
}