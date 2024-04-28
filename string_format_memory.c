/* 문자열 포인터에 문자열 만들기 */
/* malloc함수로 메모리 할당 . 후sprinf 함수로 문자열 만들기 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>    // malloc 함수가 선언된 헤더 파일

int main()
{
	char *s1 = malloc(sizeof(char) * 20);    // char 20개 크기만큼 동적 메모리 할당
	sprintf(s1, "Hello, %s", "world!");
	printf("%s\n", s1);    // Hello, world!: 문자열 s1 출력
	free(s1);    // 동적 메모리 해제

	return 0;
}