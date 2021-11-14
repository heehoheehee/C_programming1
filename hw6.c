#include <stdio.h>


int main(void) {
    int arr1[6] = {1,2,3,4,5,6};
    int arr2[6] = {7,8,9,10,11,12};
    int *a = arr1;
    int *b = arr2;
    int c[6] = {0,0,0,0,0,0};
    printf("arr1: ");
    for(int i= 0;i<6;i++){
        printf("%d ",a[i]);
    }
    printf("\n");
    printf("arr2: ");
    for(int i= 0;i<6;i++){
        printf("%d ",b[i]);
    }
    for(int i= 0;i<6;i++){
        c[i] = a[i];
        a[i] = b[i];
        b[i] = c[i];
    }
    printf("\n\n");
    printf("after swap \n");
    printf("arr1: ");
    for(int i= 0;i<6;i++){
        printf("%d ",a[i]);
    }
    printf("\n");
    printf("arr2: ");
    for(int i= 0;i<6;i++){
        printf("%d ",b[i]);
    }
    printf("\n");
}
