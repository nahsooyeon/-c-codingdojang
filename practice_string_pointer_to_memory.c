/* 문자열 포인터를 동적 메모리에 복사 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/* "The Little Prince" 가 출력 */

int main()
{
	char *s1 = "The Little Prince";
	char *s2 = malloc(sizeof(char) * 20);

	strcpy(s2, s1);

	printf("%s\n", s2);

	free(s2);

	return 0;
}