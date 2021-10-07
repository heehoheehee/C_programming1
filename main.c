#include <stdio.h>

int main(void)
{
    int n, i, count = 0;

    printf("정수 입력 : ");
    scanf("%d", &n);

    for (i = 2; i <= n-1; i++)
    {
        if (n % i == 0)
            count++;
    }

    if (count == 0)
        printf("It is a prime number\n");
    else
        printf("It is not a prime number\n");

    return 0;
}
