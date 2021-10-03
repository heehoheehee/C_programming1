#include <stdio.h>

int main(void){
    float kilo = 0;
    float miles = 1.609;
    printf("Please enter Kilometers: \n");
    scanf("%f",&kilo);
    printf("%.1f is equal to %.1f miles.",kilo,(kilo/miles));
    return 0;
}
