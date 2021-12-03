#include <stdio.h>

int main()
{
    int sum1 = 0, sum2 = 0, num, i = 1;

    scanf("%d", &num);

    while (i <= num)
    {
        if (i % 2 == 0)
        {
            sum1 = sum1 + i;
        }else{
            sum2 = sum2 + i;
        }
        i++;
    }

    printf("Even: %d\n",sum1);
    printf("Even: %d\n",sum2);

    return 0;
}