#include <stdio.h>
#include<math.h>

int main()
{
    float a, b, c, s, area;

    scanf("%f %f %f", &a, &b, &c);

    s = (a + b + c) / (float)2;

    area = sqrt(s*(s-a)*(s-b)*(s-c));

    printf("Area: %.2f", area);

    return 0;
}