/* 정수 2, 4, 8을 입력했을 때 문자열 "2", "4", "8"이 출력되게 */
#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS
int main()
{
	int num1 = 0;
	scanf("%d", &num1);

	switch (num1)
	{
		case 1 << 1:
			printf("2\n");
			break;
		case 1 << 2:
			printf("4\n");
			break;
		case 1 << 3:
			printf("8\n");
			break;
		default:
			break;
	}
	return 0;
}