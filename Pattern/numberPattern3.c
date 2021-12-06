/*

5
             1 
          1  2  1 
       1  2  3  2  1 
    1  2  3  4  3  2  1 
 1  2  3  4  5  4  3  2  1 
    1  2  3  4  3  2  1 
       1  2  3  2  1 
          1  2  1 
             1 
*/
#include <stdio.h>

int main()
{
    int row, col, n;

    scanf("%d", &n);

    // top
    for (row = 1; row <= n; row++)
    {
        // space
        for (col = 1; col <= n - row; col++)
        {
            printf("   ");
        }
        // left character
        for (col = 1; col <= row; col++)
        {
            printf(" %d ", col);
        }
        // right character
        for (col = row - 1; col >= 1; col--)
        {
            printf(" %d ", col);
        }

        printf("\n");
    }
    // bottom

    for (row = n - 1; row >= 1; row--)
    {
        // space
        for (col = 1; col <= n - row; col++)
        {
            printf("   ");
        }
        // left character
        for (col = 1; col <= row; col++)
        {
            printf(" %d ", col);
        }
        // right character
        for (col = row - 1; col >= 1; col--)
        {
            printf(" %d ", col);
        }

        printf("\n");
    }
}
