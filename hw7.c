#include <stdio.h>
#include <math.h>


int main(void) {
    int a[5];
    printf("Enter 5 real numbers: ");
    for(int i=0;i<5;i++){
        scanf("%d",a+i);
    }
    double b = (a[0] + a[1] + a[2] + a[3] + a[4])/5;
    double c = 0;
    for(int i=0;i<5;i++){
        c = c + (b-a[i])*(b-a[i]);
    }
    c = c/5;
    double d = sqrt(c);
    printf("Standard Deviation: %.3f\n",d);
    return 0;
}
