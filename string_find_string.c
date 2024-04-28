#include <stdio.h>
#include <string.h>    // strstr 함수가 선언된 헤더 파일

int main()
{
    char s1[30] = "A Garden Diary";     // 크기가 30인 char형 배열을 선언하고 문자열 할당

    char *ptr = strstr(s1, "den");      // den으로 시작하는 문자열 검색, 포인터 반환

    printf("%s\n", ptr);    // den Diary

    return 0;
}

/* 즉, 검색한 문자 "den"만 나오지 않고 뒤에 오는 모든 문자열이 나온다(NULL이 나오기 전까지). */