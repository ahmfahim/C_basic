#include <stdio.h>

int main()
{
    int num1 = 100;
    int num2 = 5;

    num1 = num1 - num2; //100 - 5 = 95
    num2 = num1 + num2; //95 + 5 = 100
    num1 = num2 - num1; // 100 - 95 = 5

    printf("num1 = %d num2= %d", num1, num2);

    return 0;
}