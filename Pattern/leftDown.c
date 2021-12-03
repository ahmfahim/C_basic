/*
    * * * * *
      * * * *
        * * *
          * *
            *
*/

#include <stdio.h>

int main()
{
    int row, col, n;

    scanf("%d", &n);

    for (row = n; row >= 1; row--)
    {
        // space print
        for (col = 1; col <= n - row; col++)
        {
            printf("  ");
        }
        // character print
        for (col = 1; col <= row; col++)
        {
            printf(" *");
        }
        printf("\n");
    }
    return 0;
}