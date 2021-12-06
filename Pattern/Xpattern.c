/*
row+col == n+1 || row == col

*       * 
 *     * 
  *   * 
   * * 
    * 
   * * 
  *   * 
 *     * 
*       * 

*/ 

#include <stdio.h>

int main()
{
    int row, col, n;

    scanf("%d", &n);

    for (row = n; row >= 1; row--)
    {
        // space
        for (col = 1; col <= n - row; col++)
        {
            printf(" ");
        }
        // character
        for (col = 1; col <= row; col++)
        {
            if (row == 1 || col == 1 || col == row)
            {
                printf("* ");
            }
            else
            {
                printf("  ");
            }
        }
        printf("\n");
    }
    // bottom
    for (row = 2; row <= n; row++)
    {
        // space
        for (col = 1; col <= n - row; col++)
        {
            printf(" ");
        }
        // character
        for (col = 1; col <= row; col++)
        {
            if (row == 1 || col == 1 || col == row)
            {
                printf("* ");
            }
            else
            {
                printf("  ");
            }
        }
        printf("\n");
    }
}