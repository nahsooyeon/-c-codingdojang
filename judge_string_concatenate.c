/* 입력한 문자열 뒤에 "th"가 붙어서 출력되게 만들기 */
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main()
{
	char s1[40];

	scanf("%s", s1);

	strcat(s1, "th");

	printf("%s\n", s1);

	return 0;
	
}