#include <stdio.h>
#include <math.h>

int main(){

    double x = 3.53;

    printf("Round : %lf\n", round(x));
    printf("trunc : %lf\n", trunc(x)); // dont count value after .000

    printf("ceil : %lf\n", ceil(x)); //ceiling mean ^ to up 
    printf("floor : %lf\n", floor(x)); // down


    
    return 0;
}