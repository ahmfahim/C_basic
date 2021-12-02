#include <stdio.h>

/* global variable declaration */
int a = 20;

int main()
{
    /* local variable declaration in main function */
    int b = 10;
    int c = 0;

    printf("B in main() = %d\n", b);//10
    c = sum(a, b);
    printf("C in main() = %d\n", c);//30

    return 0;
}

/* function to add two integers */
int sum(int a, int b)
{

    printf("value of a in sum() = %d\n", a);//20
    printf("value of b in sum() = %d\n", b);//10

    return a + b;
}
