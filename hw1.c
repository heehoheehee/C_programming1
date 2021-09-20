#include <stdio.h>

void boolPractice(int a, int b){
    int and = a & b;
    int or = a | b;
    int xor = a ^ b;
    printf("둘의 and는 %d, 둘의 or는 %d, 둘의 xor는 %d 입니다!! \n", and, or, xor);
}

int main(void) {
    int q;
    int w;
    printf("첫번째 숫자를 넣으시오: ");
    scanf("%d",&q);
    printf("두번째 숫자를 넣으시오: ");
    scanf("%d",&w);
    boolPractice(q, w);
    return 0;
}
