#include <stdio.h>

int main()
{
    float base, height, area;

    printf("Base & height = ");
    scanf("%f %f",&base, &height);

    area = (float)1/2 * base * height;

    printf("Area = %.1f\n", area);

    return 0;
}