#include <stdio.h>
#include <stdlib.h>    // strtol 함수가 선언된 헤더 파일

int main()
{
    char *s1 = "0xaf10";    // "0xaf10"은 문자열
    int num1;

    num1 = strtol(s1, NULL, 16);    // 16진법으로 표기된 문자열을 정수로 변환

    printf("%x %d\n", num1, num1);  // af10 44816

    return 0;
}

/* strtol(문자열, 끝포인터, 진법);
long strtol(char const *_String, char **_EndPtr, int _Radix);
성공하면 변환된 정수를 반환, 실패하면 0을 반환

 */