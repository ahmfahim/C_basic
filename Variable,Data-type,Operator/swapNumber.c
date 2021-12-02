#include <stdio.h>

int main(){
    int num1 = 10;
    int num2 = 2;

    int temp;

    temp = num1;
    num1 = num2;
    num2 = temp;

    printf("num1 = %d num2 = %d\n", num1, num2);
}