#include <stdio.h>
void main ()
{
    int x, y;
    x = y = 0;
    printf ("Enter (1 - 3) :" );
    scanf ("%d", &x);
    if (x == 1)
    {
        printf("\nEnter  y (1 - 5) :");
        scanf ("%d", &y);
        if (y <= 5)
            printf("\nThe  y is : %d", y);
        else
            printf("\nThe value of y exceeds 5" );
    }
    else
        printf ("\nChoice entered was not 1");
}