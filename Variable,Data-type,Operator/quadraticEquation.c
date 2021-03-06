/*
    ax*ax + bx + c = 0  || [(-b +- sqrt(b*b - 4ac))/2a]


 */

#include <stdio.h>
#include <math.h>

int main()
{
    double a, b, c, d, x1, x2;

    scanf("%lf %lf %lf", &a, &b, &c);

    d = sqrt(b * b - 4 * a * c);

    x1 = (-b + d) / 2 * a;

    x2 = (-b - d) / 2 * a;

    printf("x1 = %.2lf x2 = %.2lf\n", x1, x2);

    return 0;
}