#include <stdio.h>


int main(void) {
    char a[5];
    printf("5가지 변수를 입력하시오: ");
    for(int i = 0; i<5; i++){
        scanf("%d",&a[i]);
    }
    char b = a[1]+a[2];
    printf(b);
    return 0;
}
// 어떻게 한꺼번에 받는지 모르겠음;;; 개별로 받는건 알겟는데
