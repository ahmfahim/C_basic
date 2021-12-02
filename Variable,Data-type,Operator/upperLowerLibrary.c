#include <stdio.h>
#include <ctype.h>

int main()
{
    char upper, lower;
    // printf("Enter any lowercase: ");
    // scanf("%c",&lower);

    // upper = toupper(lower);
    // printf("The upper value is:%c",upper);

    printf("Enter any Uppercase:");
    scanf("%c", &upper);

    lower = tolower(upper);
    printf("The upper value is:%c", lower);

    return 0;
}