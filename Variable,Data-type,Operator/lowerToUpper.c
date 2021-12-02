#include <stdio.h>

int main()
{
    char lower;
    printf("Enter any lower case: ");
    scanf("%c",&lower);
    
    printf("The uppercase: %c",lower-32);
}