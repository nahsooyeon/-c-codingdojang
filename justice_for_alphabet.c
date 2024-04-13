/* 표준 입력으로 문자 하나가 입력됩니다.
입력된 문자부터 z까지 순서대로 출력하는 프로그램을 만드세요
(scanf 함수 호출 전에 문자열을 출력하면 안 됩니다).
정답에는 C 언어 컴파일러에서 정상적으로 컴파일되는 전체 코드를 입력해야 합니다. */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	char c;
	scanf("%c", &c);

	for (char i = c; i <= 'z'; i++)
	{
		printf("%c", i);
	}
	return 0;
}