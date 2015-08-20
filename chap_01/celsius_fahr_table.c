#include <stdio.h>

main()
{
    float celsius, fahr;
    int lower, upper, step;

    lower = -20;
    upper = 50;
    step  = 5;

    celsius = lower;
    printf("cels  fahr\n");
    printf("----  ----\n");
    while(celsius <= upper) {
        fahr = (9.0 / 5.0) * celsius + 32.0;
        printf("%4.0f  %4.0f\n", celsius, fahr);
        celsius = celsius + step;
    }
}