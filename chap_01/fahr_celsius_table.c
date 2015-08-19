#include <stdio.h>

/* print Fahrenheit-Celsius table
    for fahr = 0, 20, ..., 300 */
main()
{
    float fahr, celsius;
    int lower, upper, step;

    lower = 0;      /* lower limit of temperature table */
    upper = 300;     /* upper limit */
    step = 20;       /* step size */

    fahr = lower;
    while (fahr <= upper) {
        celsius = 5 * (fahr-32) / 9;
        printf("%3.0f %6.1f\n", fahr, celsius);
        fahr = fahr + step;
    }

    /*
    %3d means to print a 3 digit number. 
    This will right-align the numbers

    %3.0f means to print a float at least three chars wide
    with no decimal point
    %6.1f means to print a float 6 chars wide
    with 1 digit after the decimal point
    */
}