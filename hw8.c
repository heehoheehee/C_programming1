#include <string.h>
#include <stdio.h>
#define SIZE 100

void str_upper(char *s) {
    int i;
    int count=0;
    for (i=0;i<strlen(s);i++) {
        if( s[i] >='a' && s[i] <= 'z' )
        s[i] = s[i]-'a'+'A';
    }
}

int main(void) {
    char str[SIZE];
    printf("문자열을 입력하시오: ");
    gets(str);
    str_upper(str);
    printf("변환된 문자열: %s\n", str);
    return 0;
}