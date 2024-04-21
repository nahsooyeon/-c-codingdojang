#include <stdio.h>
#include <stdlib.h>

int main()
{
	char *s1 = malloc(sizeof(char) * 30); // 문자열을 저장할 메모리를 할당.

	printf("문자열을 입력하세요: ");

	scanf("%s", s1); // 사용자로부터 문자열을 입력.
	/* scanf 함수에 포인터를 넣을 때는 &를 붙이지 않음. */

	printf("%s\n", s1); // 입력받은 문자열을 출력.

	free(s1); // 동적으로 할당한 메모리를 해제.

	return 0;


}