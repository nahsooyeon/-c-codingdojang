/* 문자열은 char 포인터 형식으로 사용합니다.

char *변수이름 = "문자열"; */

#include <stdio.h>

int main()
{
	char c1 = 'a';
	char *s1 = "Hello"; // 1바이트를 넘기는 문자열을 저장할 때는 포인터를 사용한다.

	printf("%c\n", c1);
	printf("%s\n", s1);

	printf("%p\n", s1); // 문자열의 메모리 주소를 출력한다.

	return 0;
}