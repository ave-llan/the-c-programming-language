# include <stdio.h>

/* copy input to output; 1st version */
main()
{
    int c;
    printf("Ctrl + D to indicate end of file\n");
    while ((c = getchar()) != EOF)
        putchar(c);
    printf("end of file!\n");
    putchar(c);
}