#include <stdio.h>

int main()
{
    int num1, num2, sum;
    float average;

    printf("Enter tow number = ");
    scanf("%d %d", &num1, &num2);

    sum = num1 + num2;
    average = (float)sum / 2;
    printf("The sum is = %d\n", sum);
    printf("The average is = %0.1f\n", average);

    return 0;
}