#include <stdio.h>

int main(){
    int marks;
    scanf("%d",&marks);

    if(marks >= 80)
        printf("A+");
    else if(marks >= 70)
        printf("A");
    else
        printf("Fail");
        
    return 0;
}