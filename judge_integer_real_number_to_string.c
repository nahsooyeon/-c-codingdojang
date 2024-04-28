/* 입력된 정수와 실수가 문자열로 출력되게 만들기 */

#include <stdio.h>

int main()
{
	char s1[20];
	char s2[20];
	int num1;
	float num2;

	scanf("%d %f", &num1, &num2);

	sprintf(s1, "%d", num1);
	sprintf(s2, "%f", num2);

	printf("%s\n", s1);
	printf("%s\n", s2);

	return 0;

}