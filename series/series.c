//  1 + 2 + 3 +.............+ n

#include <stdio.h>

int main()
{
    int sum = 0, i, num;
    scanf("%d", &num);

    for (i = 1; i <= num; i++)
    {
        sum += i;
    }

    printf("Sum: %d\n", sum);

    return 0;
}