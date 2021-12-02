#include <stdio.h>

int main()
{
    char test;

    scanf("%c",&test);

    if(test == 'a'|| test == 'e' || test == 'i' || test == 'o' || test == 'u')
        printf("vowel");
    else
        printf("consonent");

    return 0;
}
