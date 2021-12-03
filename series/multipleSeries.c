//  1*2 + 2*3 + 3*4+..............+ n1*n2
#include <stdio.h>

int main()
{
    int sum = 0, num1, num2, i1 = 1, i2 = 2;

    scanf("%d %d", &num1, &num2);

    while (i1 <= num1 && i2 <= num2)
    {
        sum = sum + i1 * i2;
        i1++;
        i2++;

        printf("%d * %d = %d\n", i1, i2, sum);
    }

    printf("Sum : %d\n", sum);

    return 0;
}