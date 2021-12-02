#include <stdio.h>
#include <math.h>

int main()
{
    double height, width, area;

    scanf("%lf %lf", &height, &width);

    area = height * width;

    printf("Area: %.2lf\n", area);
}
