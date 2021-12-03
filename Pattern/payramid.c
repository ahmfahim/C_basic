/*
          *
         * *
        * * *
       * * * *
      * * * * *
     * * * * * *
    * * * * * * *
   * * * * * * * *
  * * * * * * * * *
 * * * * * * * * * *
 

             * 
          *  *  * 
       *  *  *  *  * 
    *  *  *  *  *  *  * 
 *  *  *  *  *  *  *  *  * 
    *  *  *  *  *  *  * 
       *  *  *  *  * 
          *  *  * 
             * 

*/

#include <stdio.h>

int main()
{
    int row, col, n;

    scanf("%d", &n);

    for (row = 1; row <= n; row++)
    {
        // space
        for (col = 1; col <= n - row; col++)
        {
            printf("   ");
        }
        // character
        for (col = 1; col <= 2 * row - 1; col++)
        {
            printf(" * ");
        }

        printf("\n");
    }

    for (row = n-1; row >= 1; row--)
    {
        // space
        for (col = 1; col <= n - row; col++)
        {
            printf("   ");
        }
        // character
        for (col = 1; col <= 2 * row - 1; col++)
        {
            printf(" * ");
        }

        printf("\n");
    }
    return 0;
}